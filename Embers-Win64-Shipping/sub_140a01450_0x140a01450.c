// 函数: sub_140a01450
// 地址: 0x140a01450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t* r12 = arg4
int64_t* r13 = arg1

if (rbx.d s>= arg1[0x8a].d)
    sub_140a06350(&arg1[0x89], (rbx + 1).d, 0)

int64_t* rbx_2 = (rbx << 6) + r13[0x89]
sub_140a05cb0(rbx_2)
int64_t r14 = sx.q(arg3[1].d)
int64_t i = 0
int32_t rax = *(rbx_2 + 0xc)
int32_t rdx_1 = 0
rbx_2[1].d = 0

if (rax s< 0 && rax != 0)
    sub_140a05ff0(rbx_2, 0)
    rdx_1 = rbx_2[1].d

int32_t rax_1 = rdx_1 + r14.d
rbx_2[1].d = rax_1

if (rax_1 s> *(rbx_2 + 0xc))
    sub_140a05ee0(rbx_2)

if (r14.d s> 0)
    int64_t r8 = 0
    int64_t r11_1 = 0
    int64_t r10_1 = 0
    uint64_t* rcx_4 = nullptr
    
    do
        int64_t rdx_2 = *rbx_2
        void* rax_3 = *arg3
        *(rcx_4 + rdx_2) = *(rax_3 + r10_1)
        *(rcx_4 + rdx_2 + 8) = *(rax_3 + r10_1 + 8)
        int64_t* rax_8
        
        if (arg5[1].d != r14.d)
            int64_t var_a8 = 0
            rax_8 = &var_a8
            int32_t var_a0_1 = 0x3f800000
        else
            void* rax_6 = *arg5
            int32_t var_64_1 = *(rax_6 + r10_1 + 8)
            uint64_t var_6c
            rax_8 = &var_6c
            var_6c = *(rax_6 + r10_1)
        
        int32_t rax_9 = rax_8[1].d
        *(rcx_4 + rdx_2 + 0xc) = *rax_8
        *(rcx_4 + rdx_2 + 0x14) = rax_9
        int64_t* rax_12
        
        if (arg6[1].d != r14.d)
            int64_t var_c8 = 0
            rax_12 = &var_c8
        else
            uint64_t var_8c
            rax_12 = &var_8c
            var_8c = *(*arg6 + (r8 << 3))
        
        *(rcx_4 + rdx_2 + 0x2c) = *rax_12
        int64_t* rax_14
        
        if (arg7[1].d != r14.d)
            int64_t var_c0 = 0
            rax_14 = &var_c0
        else
            uint64_t var_84
            rax_14 = &var_84
            var_84 = *(*arg7 + (r8 << 3))
        
        *(rcx_4 + rdx_2 + 0x34) = *rax_14
        uint64_t* rax_16
        
        if (arg8[1].d != r14.d)
            uint64_t var_b8 = 0
            rax_16 = &var_b8
        else
            uint64_t var_7c
            rax_16 = &var_7c
            var_7c = *(*arg8 + (r8 << 3))
        
        *(rcx_4 + rdx_2 + 0x3c) = *rax_16
        uint64_t* rax_18
        
        if (arg9[1].d != r14.d)
            uint64_t var_b0 = 0
            rax_18 = &var_b0
        else
            uint64_t var_74
            rax_18 = &var_74
            var_74 = *(*arg9 + (r8 << 3))
        
        *(rcx_4 + rdx_2 + 0x44) = *rax_18
        int32_t r9
        
        if (arg10[1].d != r14.d)
            int32_t arg_10 = 0xffffffff
            r9 = -1
        else
            r9 = *(*arg10 + (r8 << 2))
        
        *(rcx_4 + rdx_2 + 0x28) = r9
        uint128_t* rax_21
        
        if (arg11[1].d != r14.d)
            int64_t var_9c = 0x3f800000
            rax_21 = &var_9c
            int32_t var_94_1 = 0
            char var_90_1 = 0
        else
            uint128_t var_60
            rax_21 = &var_60
            var_60 = *(*arg11 + r11_1)
        
        *(rcx_4 + rdx_2 + 0x18) = *rax_21
        
        if (rbx_2[7].b == 0)
            *(rbx_2 + 0x2c) = *(rcx_4 + rdx_2)
            int32_t rax_22 = *(rcx_4 + rdx_2 + 8)
            *(rbx_2 + 0x34) = rax_22
            rbx_2[4] = *(rbx_2 + 0x2c)
            rbx_2[5].d = rax_22
            rbx_2[7].b = 1
        else
            uint128_t zmm0_1 = __minss_xmmss_memss((*(rcx_4 + rdx_2)).d, rbx_2[4].d)
            int32_t zmm1 = *(rbx_2 + 0x2c)
            rbx_2[4].d = zmm0_1.d
            *(rbx_2 + 0x24) = __minss_xmmss_memss((*(rbx_2 + 0x24)).d, *(rcx_4 + rdx_2 + 4)).d
            rbx_2[5].d = __minss_xmmss_memss((*(rcx_4 + rdx_2 + 8)).d, rbx_2[5].d).d
            *(rbx_2 + 0x2c) = __maxss_xmmss_memss(zmm1, *(rcx_4 + rdx_2))
            rbx_2[6].d = __maxss_xmmss_memss((*(rcx_4 + rdx_2 + 4)).d, rbx_2[6].d).d
            *(rbx_2 + 0x34) = __maxss_xmmss_memss(*(rcx_4 + rdx_2 + 8), *(rbx_2 + 0x34))
        
        r8 += 1
        rcx_4 += 0x4c
        r10_1 += 0xc
        r11_1 += 0x10
    while (r8 s< r14)
    
    r13 = arg1
    i = 0
    r12 = arg4

int32_t temp1
int32_t temp2
temp1:temp2 = muls.dp.d(0x55555556, r12[1].d)
int32_t rax_25 = *(rbx_2 + 0x1c)
rbx_2[3].d = 0
uint32_t r15_2 = (temp1 + (temp1 u>> 0x1f)) * 3

if (rax_25 s< 0 && rax_25 != 0)
    sub_1405dadb0(&rbx_2[2], 0)

int32_t rax_26 = rbx_2[3].d + r15_2
rbx_2[3].d = rax_26

if (rax_26 s> *(rbx_2 + 0x1c))
    sub_1405a4cf0(&rbx_2[2])

if (r15_2 s> 0)
    int32_t r8_1 = (r14 - 1).d
    
    do
        int64_t rax_27 = *r12
        int32_t rdx_6 = r8_1
        
        if (*(rax_27 + (i << 2)) s<= r8_1)
            rdx_6 = *(rax_27 + (i << 2))
        
        *(rbx_2[2] + (i << 2)) = rdx_6
        i += 1
    while (i s< sx.q(r15_2))

*(rbx_2 + 0x3c) = arg12
sub_140a092f0(r13)
sub_140a09030(r13)
return sub_141ee8490(r13) __tailcall
