// 函数: sub_141e5e620
// 地址: 0x141e5e620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int16_t* const r15 = &data_142d40450

if (sub_140a237d0(arg3, &data_14324b9a4, 0) == 0)
    goto label_141e5e813

int32_t var_a8 = 0xffffffff

if (sub_140a23cf0(arg3, &data_14324b9b0, 0, 0, 0xffffffff) != 0xffffffff)
    goto label_141e5e813

int32_t rax_2 = arg3[1].d
int32_t rbx_1 = rax_2 - 1

if (rax_2 == 0)
    rbx_1 = 0

int16_t* rbp_1

if (rax_2 == 0)
    rbp_1 = &data_142d40450
else
    rbp_1 = *arg3

if (rbx_1 - 2 s< 0)
    rbx_1 = 0
else if (rbx_1 - 2 s< rbx_1)
    rbx_1 -= 2

int16_t* var_90 = nullptr
int16_t* rsi_1 = nullptr
int64_t var_88_1 = 0
int32_t rdx = 0
int32_t rax_4 = 0
int16_t* const rdx_3
int32_t rdi_2

if (rbp_1 != 0 && *rbp_1 != 0 && rbx_1 s> 0)
    if (rbx_1 + 1 s> 0)
        sub_1405947f0(&var_90, rbx_1 + 1)
        rax_4 = var_88_1:4.d
        rdx = var_88_1.d
        rsi_1 = var_90
    
    rdi_2 = rdx + 1 + rbx_1
    var_88_1.d = rdi_2
    
    if (rdi_2 s> rax_4)
        sub_140594770(&var_90)
        rdi_2 = var_88_1.d
        rsi_1 = var_90
    
    UnDecorator::getReferenceType(rsi_1, rbp_1, rbx_1 * 2)
    rdx_3 = rsi_1
    rsi_1[sx.q(rdi_2) - 1] = 0

if (rbp_1 == 0 || *rbp_1 == 0 || rbx_1 s<= 0 || rdi_2 == 0)
    rdx_3 = &data_142d40450

void var_98
void var_80
sub_141cb8f30(arg4, 
    (*(*arg2 + 0x50))(arg2, &var_80, *sub_140b58260(&var_98, rdx_3, 1), zx.q(*(arg1 + 0x2da))))
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp4_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

int32_t rcx_13
rcx_13.b = sub_140b5b8a0(*arg4, 0) == 0
bool result = *(arg4 + 4) != 0 | rcx_13.b

if (result == 0)
    rbx = arg1
label_141e5e813:
    
    if (arg3[1].d != 0)
        r15 = *arg3
    
    result = sub_141cb8f30(arg4, 
        (*(*arg2 + 0x50))(arg2, &var_80, *sub_140b58260(&var_98, r15, 1), zx.q(*(rbx + 0x2da)), 
            var_a8))
    
    if (var_48 != 0)
        result = sub_140a74f90(var_48)
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            result = (**var_50)(var_50)
            int32_t temp2_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp2_1 == 1)
                return (*(*var_50 + 8))(var_50, 1)

return result
