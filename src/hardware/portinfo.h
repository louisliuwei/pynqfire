#ifndef _SDS_PORTINFO_H
#define _SDS_PORTINFO_H
/* File: C:/test6/firf_wHDMI/SDDebug/_sds/p0/.cf_work/portinfo.h */
#ifdef __cplusplus
extern "C" {
#endif

struct _p0_swblk_cpp_FIR {
  cf_port_send_t cmd_cpp_FIR;
  cf_port_send_t x;
  cf_port_receive_t ret;
  cf_port_send_t datalen;
};

extern struct _p0_swblk_cpp_FIR _p0_swinst_cpp_FIR_0;
void _p0_cf_framework_open(int);
void _p0_cf_framework_close(int);

#ifdef __cplusplus
};
#endif
#ifdef __cplusplus
extern "C" {
#endif
void switch_to_next_partition(int);
void init_first_partition();
void close_last_partition();
#ifdef __cplusplus
};
#endif /* extern "C" */
#endif /* _SDS_PORTINFO_H_ */
