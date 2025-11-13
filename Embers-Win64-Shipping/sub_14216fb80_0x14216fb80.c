// 函数: sub_14216fb80
// 地址: 0x14216fb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg3 != arg1[0x28])
    return 

int64_t r15_1 = 0
bool cond:0_1 = (*(*arg1 + 0x368))() != 0
int64_t rax_3 = sx.q(*(arg2 + 0xa0))

if (not(cond:0_1))
    int64_t* rbx_1 = *(arg2 + 0x98)
    uint64_t rdi_2 = rax_3 << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[rax_3])
        rdi_2 = 0
    
    if (rdi_2 != 0)
        do
            int64_t rdx = *rbx_1
            
            if (rdx != 0)
                (*(*arg1 + 0x348))(arg1, rdx)
            
            rbx_1 = &rbx_1[1]
            r15_1 += 1
        while (r15_1 != rdi_2)
    
    return 

int64_t* rdi_3 = *(arg2 + 0x98)
int64_t r14_2 = 0
uint64_t r12_2 = rax_3 << 3 u>> 3

if (rdi_3 u> &rdi_3[rax_3])
    r12_2 = 0

if (r12_2 != 0)
    do
        void* rbx_2 = *rdi_3
        
        if (rbx_2 != 0)
            if (sub_141dce3a0(rbx_2) != 0)
                sub_142174860(arg1[0xde], rbx_2)
            else
                (*(*arg1 + 0x348))(arg1, rbx_2)
        
        rdi_3 = &rdi_3[1]
        r14_2 += 1
    while (r14_2 != r12_2)

int32_t arg_20 = 0
int32_t r11_1 = arg1[0x6a].d
void* r9_1 = &arg1[0x67]
int32_t var_7c_1 = 0
int64_t rbx_3 = 0
int64_t var_88 = 0
int32_t rcx_4 = 0
int32_t var_c8_1 = 0
int32_t r8 = 0
int32_t var_c4_1 = 1
void* var_c0 = r9_1
int32_t var_b8_1 = 0xffffffff
int64_t var_b4_1 = 0

if (r11_1 != 0)
    void* rax_8 = *(r9_1 + 0x10)
    
    if (rax_8 != 0)
        r9_1 = rax_8
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11_1 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_14216fd28:
        int32_t rax_15 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
        int32_t var_c4_2 = rax_15
        int32_t rax_16
        
        if (rax_15 == 0)
            rax_16 = 0x20
        else
            rax_16 = 0x1f - temp0_2
        
        r8 -= rax_16
        var_b4_1.d = r8 + 0x1f
        
        if (r8 + 0x1f s> r11_1)
            var_b4_1.d = r11_1
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_4)
            r8 += 0x20
            rcx_4 += 1
            var_b4_1:4.d = r8
            var_c8_1 = rcx_4
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            var_b8_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_14216fd28
        
        var_b4_1.d = r11_1

void* var_48_1 = &arg1[0x65]
int128_t zmm0 = var_c8_1.o
int128_t var_58_1 = 0xffffffff
int16_t var_90_1 = 0
void* const* rax = zmm0.q
var_b8_1.o = zmm0
var_c8_1.o = (&arg1[0x65]).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)

if (0 s>= rax[3].d)
    return 

int32_t i_1
int32_t i = i_1

do
    int64_t rcx_7 = sx.q(i) * 0x18
    int32_t* r13_1 = *(rcx_7 + *var_c8_1.q + 8)
    
    if (sub_1405a66e0(r13_1, arg2, r8) != 0 && (r13_1[7].b & 1) == 0)
        int64_t rdi_5 = 0
        void** rbx_4 = arg1[0x12]
        uint64_t r14_4 = sx.q(arg1[0x13].d) << 3 u>> 3
        
        if (rbx_4 u> &rbx_4[arg1[0x13]])
            r14_4 = 0
        
        if (r14_4 != 0)
            do
                void* rax_24 = *rbx_4
                int64_t* rcx_9 = *(rax_24 + 0x13c0)
                
                if (rcx_9 == 0)
                    sub_141fc3c20(rax_24 + 0x13c8, &r13_1[7])
                else
                    (*(*rcx_9 + 0x288))(rcx_9, r13_1)
                
                rbx_4 = &rbx_4[1]
                rdi_5 += 1
            while (rdi_5 != r14_4)
        
        int64_t rbx_5 = sx.q(arg_20)
        int32_t rdi_6 = (rbx_5 + 1).d
        int64_t r14_5 = *var_c8_1.q
        arg_20 = rdi_6
        
        if (rdi_6 s> var_7c_1)
            sub_1405a4cf0(&var_88)
            arg_20 = rdi_6
        
        rbx_3 = var_88
        *(rbx_3 + (rbx_5 << 2)) = *(rcx_7 + r14_5)
        sub_142174370(zmm0:8.q, i_1)
        var_90_1.b = 1
    
    var_b4_1:4.d &= not.d(var_c0:4.d)
    r8 = sub_14059bdd0(&var_c0)
    i = i_1
while (i s< var_b8_1.q[3].d)

if (var_90_1.b != 0 && var_90_1:1.b != 0)
    r8.b = 1
    sub_140b9ddc0(&arg1[0x65], arg1[0x66].d - *(arg1 + 0x35c), r8.b)

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)
