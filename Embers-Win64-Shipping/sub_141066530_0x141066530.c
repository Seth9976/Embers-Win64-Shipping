// 函数: sub_141066530
// 地址: 0x141066530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58
__builtin_memset(&var_58, 0, 0x28)
int64_t var_50
var_50.d = 0x1688
void* rax_1 = (*(*arg3 + 0x18))(arg3)
int64_t var_40
void* i
int32_t rdi
int32_t r15
int64_t var_48

if (rax_1 == 0)
    void* rax_3 = (*(*arg3 + 0x10))(arg3)
    
    if (rax_3 == 0)
        void* rax_7 = (*(*arg3 + 0x20))(arg3)
        
        if (rax_7 != 0)
            i = rax_7 + 0x70
            rdi = 9
            r15 = *(*(rax_7 + 0xc8) + 0xa8)
            goto label_141066634
        
        void* rax_9 = (*(*arg3 + 8))(arg3)
        void* rcx_7 = *(rax_9 + 0xc0)
        i = rax_9 + 0x68
        r15 = *(rcx_7 + 0xa8)
        
        if (*(rcx_7 + 0xac) u<= 1)
            rdi = 4
            goto label_141066634
        
        rdi = 6
        var_58:4.d = 6
    else
        void* rcx_3 = *(rax_3 + 0xc8)
        i = rax_3 + 0x70
        uint32_t rax_4 = *(arg4 + 0xc)
        rdi = 5
        var_58:4.d = 5
        r15 = *(rcx_3 + 0xa8)
        
        if (rax_4 == 0)
            rax_4 = zx.d(*(rcx_3 + 0xa4))
        
        var_40:4.d = rax_4
        var_40.d = *(arg4 + 8)
        var_48:4.d = zx.d(arg4[2])
        var_48.d = zx.d(arg4[1])
else
    i = rax_1 + 0x70
    rdi = 8
    r15 = *(*(rax_1 + 0xc8) + 0xa8)
label_141066634:
    var_58:4.d = rdi
    var_48:4.d = zx.d(arg4[2])
    var_48.d = zx.d(arg4[1])
char rdx

if (*(arg4 + 4) == 1 || ((arg3[8].d u>> 4).b & 1) == 0)
    rdx = 0
else
    rdx = 1

char rax_14 = *arg4
int32_t rcx_8

if (rax_14 != 0)
    rcx_8 = (&data_1439c85fc)[zx.q(rax_14) * 0xa]
else
    rcx_8 = r15

int32_t rax_16 = sub_140fe7330(rcx_8, rdx)
var_58.d = rax_16

if (rdi == 4)
    int32_t rax_19 = sub_141021240(r15)
    int32_t rax_20
    int32_t rbx_3
    bool cond:1_1
    
    if (rax_19 == 0x13)
        rbx_3 = rax_16 - 0x15
        cond:1_1 = rax_16 == 0x15
    label_1410666d6:
        
        if (cond:1_1 || rbx_3 != 1)
            rax_20 = 0
        else
            rax_20 = rbx_3
    else
        if (rax_19 == 0x2c)
            rbx_3 = rax_16 - 0x2e
            cond:1_1 = rax_16 == 0x2e
            goto label_1410666d6
        
        rax_20 = 0
    var_40.d = rax_20
else if (rdi == 5)
    int32_t rax_17 = sub_141021240(r15)
    int64_t var_38
    int32_t rbx_2
    bool cond:2_1
    
    if (rax_17 == 0x13)
        rbx_2 = rax_16 - 0x15
        cond:2_1 = rax_16 == 0x15
    label_1410666a7:
        
        if (cond:2_1 || rbx_2 != 1)
            var_38.d = 0
        else
            var_38.d = rbx_2
    else
        if (rax_17 == 0x2c)
            rbx_2 = rax_16 - 0x2e
            cond:2_1 = rax_16 == 0x2e
            goto label_1410666a7
        
        var_38.d = 0

if (i != 0)
    void*** r14_1 = nullptr
    void*** rdi_2 = nullptr
    
    do
        void*** rax_21 = j_sub_140a82f30(0xa8)
        void*** rbx_4 = rax_21
        
        if (rax_21 == 0)
            rbx_4 = nullptr
        else
            sub_14100d6c0(rax_21, *(i + 8))
            *rbx_4 = &data_142efcd08
            rbx_4[3] = &data_142efcd10
            sub_141025d40(rbx_4, &var_58, i + 0x48, 0xffffffff, 0)
        
        if (rdi_2 != 0)
            sub_1405d16e0(&rdi_2[0x12], rbx_4)
            
            if (rbx_4 != 0)
                rbx_4[0x13].b = 0
        else
            r14_1 = rbx_4
        
        i = *(i + 0xb8)
        rdi_2 = rbx_4
    while (i != 0)
    
    *arg2 = r14_1
    
    if (r14_1 != 0)
        r14_1[1].d += 1
else
    *arg2 = i

return arg2
