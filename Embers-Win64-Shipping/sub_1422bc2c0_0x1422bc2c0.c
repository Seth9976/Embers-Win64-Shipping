// 函数: sub_1422bc2c0
// 地址: 0x1422bc2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_58 = arg4
void* var_68
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[3]), &var_68, &data_143f53dd0, 0)
void* r13 = var_68
void* rbx = nullptr

if (r13 != 0)
    int64_t rdx_1 = sx.q(*(r13 + 0x10c))
    void* var_60
    int64_t* rdi_1 = *(var_60 + 0x10)
    int64_t rbx_1 = rdi_1[3]
    
    if (*(rbx_1 + (rdx_1 << 3)) == 0)
        sub_1419ccf30(rdi_1, rdx_1.d)
        rbx_1 = rdi_1[3]
    
    rbx = *(rbx_1 + (rdx_1 << 3))

*(arg1 + 0x1b0) = rbx
sub_14198aa60(rbx)
void*** rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_6[3]

if (rax_2 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_6[3]

*(arg1 + 0x30) = rax_2
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_6
*(arg1 + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142dd5b40
rcx_6[2] = rbx
int32_t rax_5 = *arg2
uint64_t rcx_10 = zx.q(data_14401b1a0)
int32_t r14_1 = rax_5 * arg2[1]
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
arg4 = _mm_cvtepi32_ps(zx.o(rax_5))

if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_10 << 3))))
    _Init_thread_header(&data_143cda914)
    
    if (data_143cda914 == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)

int32_t rbx_2 = 0
int32_t rbp_2 = 0
int32_t i = 1
int32_t r15 = (int.q(logf(arg4.d) f* data_143cda910)).d

if (r15 u>= 1)
    if (r15 u>= 2)
        int32_t r9_1 = arg2[1]
        int32_t r10_1 = *arg2
        
        do
            char rcx_12 = i.b
            char rcx_13 = i.b + 1
            i += 2
            rbx_2 += (r9_1 s>> rcx_12) * (r10_1 s>> rcx_12)
            rbp_2 += (r9_1 s>> rcx_13) * (r10_1 s>> rcx_13)
        while (i u<= r15 - 1)
    
    if (i u<= r15)
        char rcx_14 = i.b
        r14_1 += (arg2[1] s>> rcx_14) * (*arg2 s>> rcx_14)
    
    r14_1 += rbx_2 + rbp_2

int64_t* rbx_3 = arg3
int32_t rbp_3 = 0
sub_1407b4d10(rbx_3, 4, r14_1, 0xd, 0x208, 0, 0)
void* r14_2 = r13 + 0x124

do
    void var_90
    sub_140b58260(&var_90, u"SkyLight SolidAnglePdf Build", 1)
    int64_t* rcx_17 = data_143f0f180
    int64_t* var_98
    (*(*rcx_17 + 0x98))(rcx_17, &var_98, &var_90)
    int64_t arg_20 = *(arg1 + 0x1b0)
    int32_t arg_8 = rbp_3
    sub_140741e30(arg1, &arg_20, r13 + 0x118, &arg_8, 0)
    sub_14077c5f0(arg1, &arg_20, r13 + 0x11e, arg2, 0)
    sub_14077c370(r14_2, arg1, &arg_20, rbx_3)
    int64_t zmm0_2 = *arg2
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(zmm0_2.d + 7)
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q((zmm0_2 u>> 0x20).d + 7)
    sub_1419cd1c0(arg1, r13, ((temp1_1 & 7) + temp2_1) s>> 3, ((temp3_1 & 7) + temp4_1) s>> 3, 1)
    int64_t* r14_3 = var_98
    sub_14077cfd0(r13 + 0x124, arg1, *(arg1 + 0x1b0))
    int64_t rax_23 = rbx_3[1]
    int64_t* rbx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_23 = &rbx_6[1]
    
    if (rcx_23 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rbx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_23 = &rbx_6[1]
    
    *(arg1 + 0x30) = rcx_23
    *rbx_6 = rax_23
    void*** rcx_27 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_24 = &rcx_27[6]
    
    if (rax_24 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_27 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_24 = &rcx_27[6]
    
    *(arg1 + 0x30) = rax_24
    void**** rax_25 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_25 = rcx_27
    *(arg1 + 8) = &rcx_27[1]
    rcx_27[1] = 0
    *rcx_27 = &data_142da7798
    rcx_27[2].d = 1
    rcx_27[3] = rbx_6
    rcx_27[4].d = 2
    *(rcx_27 + 0x24) = 3
    rcx_27[5] = r14_3
    int64_t* rbx_9 = var_98
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            char rax_28
            
            if (rbx_9[2].b == 0 && data_143f0f1d0 == 0)
                rax_28 = sub_1405949a0()
            
            if (rbx_9[2].b != 0 || (data_143f0f1d0 == 0 && rax_28 != 0))
                (**rbx_9)(rbx_9, 1)
            else
                bool z_1
                
                if (0 == *(rbx_9 + 0xc))
                    *(rbx_9 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_9 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_30 = sub_140a20af0()
                    uint64_t rdx_21 = zx.q(rax_30)
                    void* const rax_31
                    
                    if (rax_30 != 0)
                        rax_31 = *(&data_143cf0bf8 + (rdx_21 u>> 0xe << 3))
                            + (zx.q(rdx_21.d) & 0x3fff) * 0x18
                    else
                        rax_31 = nullptr
                    
                    *(rax_31 + 8) = rbx_9
                    sub_1405a42f0(&data_143f02390, rdx_21.d)
    
    rbx_3 = arg3
    r14_2 = r13 + 0x124
    rbp_3 += 1
while (rbp_3 u<= r15)

int512_t zmm6
zmm6.o = var_58
return 1
