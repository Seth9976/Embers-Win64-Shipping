// 函数: sub_140a9a3d0
// 地址: 0x140a9a3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(*arg1 + 8)
(*(*rdi + 0x1d8))(rdi, &data_1439a93f8)
int32_t rax_2
int512_t zmm1
rax_2, zmm1 = sub_140b4e7c0(rdi, &data_1439a93f8)
int32_t arg_10

if (rax_2 s>= 0x15)
    int64_t* r9_1 = *(*arg1 + 8)
    int64_t* rcx_2 = r9_1[1]
    int32_t* rdx = *rcx_2
    
    if (&rdx[1] u> rcx_2[1])
        int32_t rax_6
        rax_6.b = *arg2 != 0
        arg_10 = rax_6
        (*(*r9_1 + 0x150))(r9_1, &arg_10, 4)
        *arg2 = arg_10 != 0
    else
        void* rax_4
        rax_4.b = *rdx != 0
        *arg2 = rax_4.b
        int64_t* rax_5 = r9_1[1]
        *rax_5 += 4

int64_t* r9_2 = *(*arg1 + 8)
int64_t* rcx_4 = r9_2[1]
int32_t* rdx_2 = *rcx_4

if (&rdx_2[1] u> rcx_4[1])
    int64_t rax_12 = *r9_2
    int32_t rdi_1
    rdi_1.b = arg2[1] != 0
    arg_10 = rdi_1
    (*(rax_12 + 0x150))(r9_2, &arg_10, 4)
    arg2[1] = arg_10 != 0
else
    void* rax_10
    rax_10.b = *rdx_2 != 0
    arg2[1] = rax_10.b
    int64_t* rax_11 = r9_2[1]
    *rax_11 += 4

char arg_8 = arg2[4]
int64_t* r9_3 = *(*arg1 + 8)
int64_t* rcx_6 = r9_3[1]
char* rdx_4 = *rcx_6

if (&rdx_4[1] u> rcx_6[1])
    (*(*r9_3 + 0x150))(r9_3, &arg_8, 1)
else
    arg_8 = *rdx_4
    int64_t* rax_18 = r9_3[1]
    *rax_18 += 1

*(arg2 + 4) = sx.d(arg_8)
int64_t* r9_4 = *(*arg1 + 8)
int64_t* rcx_8 = r9_4[1]
int32_t* r8 = *rcx_8

if (&r8[1] u<= rcx_8[1])
    *(arg2 + 8) = *r8
    int64_t* rax_24 = r9_4[1]
    *rax_24 += 4
else if ((*(r9_4 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_4, &arg2[8], zmm1)
else
    (*(*r9_4 + 0x150))(r9_4, &arg2[8], 4)

int64_t* r9_5 = *(*arg1 + 8)
int64_t* rcx_10 = r9_5[1]
int32_t* r8_1 = *rcx_10

if (&r8_1[1] u<= rcx_10[1])
    *(arg2 + 0xc) = *r8_1
    int64_t* rax_29 = r9_5[1]
    *rax_29 += 4
else if ((*(r9_5 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_5, &arg2[0xc], zmm1)
else
    (*(*r9_5 + 0x150))(r9_5, &arg2[0xc], 4)

int64_t* r9_6 = *(*arg1 + 8)
int64_t* rcx_12 = r9_6[1]
int32_t* r8_2 = *rcx_12

if (&r8_2[1] u<= rcx_12[1])
    *(arg2 + 0x10) = *r8_2
    int64_t* rax_34 = r9_6[1]
    *rax_34 += 4
else if ((*(r9_6 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_6, &arg2[0x10], zmm1)
else
    (*(*r9_6 + 0x150))(r9_6, &arg2[0x10], 4)

int64_t* r9_7 = *(*arg1 + 8)
int64_t* rcx_14 = r9_7[1]
int32_t* r8_3 = *rcx_14

if (&r8_3[1] u<= rcx_14[1])
    *(arg2 + 0x14) = *r8_3
    int64_t* result = r9_7[1]
    *result += 4
    return result

if ((*(r9_7 + 0x29) & 0x20) != 0)
    return sub_140b54070(r9_7, &arg2[0x14], zmm1)

return (*(*r9_7 + 0x150))(r9_7, &arg2[0x14], 4)
