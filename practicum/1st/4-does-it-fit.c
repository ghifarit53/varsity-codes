#include <math.h>
#include <stdio.h>

#define PI 3.14159

int main() {
  double sphere_r, n_spheres, cube_s, box_w, box_l, box_h, cyl_h, cyl_r;

  scanf("%lf %lf", &sphere_r, &n_spheres);
  scanf("%lf", &cube_s);
  scanf("%lf %lf %lf", &box_l, &box_w, &box_h);
  scanf("%lf %lf", &cyl_r, &cyl_h);

  double vol_sphere = 4.0 / 3.0 * PI * pow(sphere_r, 3);
  double vol_sphere_all = vol_sphere * n_spheres;

  double vol_cube = pow(cube_s, 3);
  double vol_box = box_w * box_l * box_h;
  double vol_cyl = cyl_h * PI * pow(cyl_r, 2);

  if (vol_sphere_all > vol_cube && vol_sphere_all > vol_box &&
      vol_sphere_all > vol_cyl) {
    printf("Aw nothing fits D:\n");
    return 0;
  }

  if (vol_sphere_all <= vol_cube) {
    printf("Cube fits!\n");
  }
  if (vol_sphere_all <= vol_box) {
    printf("Box fits!\n");
  }
  if (vol_sphere_all <= vol_cyl) {
    printf("Cylinder fits!\n");
  }

  return 0;
}
