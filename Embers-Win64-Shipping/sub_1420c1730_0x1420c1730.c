// 函数: sub_1420c1730
// 地址: 0x1420c1730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t rdi_1 = *(arg2 + 0x80)
int64_t* r12_1 = *(arg2 + 0x78)
int64_t* var_48 = r12_1
int32_t var_34_1 = rdi_1
int32_t var_40_1 = arg1.d
int32_t rbp_1 = *(r12_1 + 0x3c)
int32_t var_38_1 = rbp_1

if ((arg3 s>= 0 && arg3 s< arg1[1].d) || arg5 == 0)
label_1420c1819:
    
    if (arg3 s< 0)
        goto label_1420c1866
    
    int32_t rax_2 = arg1[1].d
    rdi_1.b = not.b(rdi_1.b)
    rdi_1.b &= 1
    
    if (arg3 s>= rax_2)
        goto label_1420c1866
    
    void* rcx_4
    
    if (rax_2 != 0)
        void* rax_3 = *arg1
        
        if (rdi_1.b == 0 && (rax_3.b & 1) != 0)
            rax_3 = (rax_3 s>> 1) + arg1
        
        rcx_4 = sx.q(rbp_1 * arg3) + rax_3
    else
        rcx_4 = nullptr
    
    (*(*r12_1 + 0xc0))(r12_1, rcx_4, arg4)
    return 

if (arg3 s>= 0)
    int32_t r14_1 = arg1[1].d
    
    if (arg3 s>= r14_1)
        int32_t rcx = r14_1 + arg3 - r14_1 + 1
        arg1[1].d = rcx
        int32_t rdx = *(arg1 + 0xc)
        
        if ((not.b(rdi_1.b) & 1) != 0)
            if (rcx s> rdx)
                sub_140ce4cd0(arg1, zx.q(r14_1), rbp_1)
        else if (rcx s> rdx)
            sub_140ce4c40(arg1, r14_1, rbp_1)
        
        sub_1420b6b60(&var_48, r14_1, arg3 - r14_1 + 1)
    
    goto label_1420c1819

label_1420c1866:
int32_t rax_6 = arg1[1].d
int32_t rbx_2 = rax_6 - 1

if (rax_6 s<= 0)
    rbx_2 = 0

sub_140b63b70(arg2 + 0x28, &var_48)
int16_t* const rdi_2 = &data_142d40450
int64_t* r8_4 = &data_142d40450
int32_t var_68_1 = rbx_2

if (var_40_1 != 0)
    r8_4 = var_48

int16_t* var_58
sub_140a2e390(&var_58, u"Attempted to set an invalid index on array %s [%d/%d]!", r8_4)
data_143f47de8
int32_t var_50

if (var_50 != 0)
    rdi_2 = var_58

sub_140d23f50(rdi_2, 3)
int16_t* rcx_10 = var_58

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t* rcx_11 = var_48

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)
