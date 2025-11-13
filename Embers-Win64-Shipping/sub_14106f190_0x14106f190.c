// 函数: sub_14106f190
// 地址: 0x14106f190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t arg_8

if (*(arg1 + 0x30) != *(arg1 + 0x5c))
    arg_8 = arg2
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg_8:4.d
    void* r8_1 = arg1 + 0x60
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0x70)) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x28)
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx_2 = i_1 * 3
            
            if (*(r8_2 + (rcx_2 << 3)) == arg2)
                if (i != 0xffffffff)
                    void* rax_18 = r8_2 + i_1 * 0x18
                    
                    if (rax_18 != 0 && rax_18 != -8)
                        return *(rax_18 + 8)
                
                break
            
            i = *(r8_2 + (rcx_2 << 3) + 0x10)
        while (i != 0xffffffff)

int16_t* var_58 = nullptr
int32_t var_50 = 0
sub_1405947f0(&var_58, 0x17)
int32_t rax_4 = var_50 + 0x17

if (rax_4 s> 0)
    sub_140594770(&var_58)

int16_t var_88 = 0x3f
sub_1405a7220(var_58, 0x17, "ForwardShadingQuality_", 0x17, 0x3f)
sub_140b5c770(&arg_10, &var_58)
int16_t* r14 = &data_142d40450
int16_t* const rbx_1 = &data_142d40450

if (rax_4 != 0)
    rbx_1 = var_58

void* rax_6 = sub_140d2ee50(sub_14106f550(), arg1, rbx_1, 0)
void* rbx_2 = rax_6

if (rax_6 == 0)
    int16_t* rdx_6 = &data_142d40450
    
    if (rax_4 != 0)
        rdx_6 = var_58
    
    sub_140b58260(&arg_8, rdx_6, (rax_6 + 1).d)
    
    if (rax_4 != 0)
        r14 = var_58
    
    int64_t* rax_7 = sub_14106f550()
    void arg_18
    uint64_t rbx_3 = *sub_140b58260(&arg_18, r14, (rbx_2 + 1).d)
    uint32_t rcx_12
    rcx_12.b = (rbx_3 u>> 0x20).d == 0
    
    if ((rcx_12.b & sub_140b5b8a0(rbx_3.d, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    var_88.d = 0
    void* rax_10 = sub_140d2dfc0(rax_7, arg1, rbx_3, 0, 0, 0, 0, 0, 0)
    var_88.q = 0
    rbx_2 = rax_10
    sub_140ce1310(rax_10, nullptr, nullptr, 0, 0)

int32_t var_48
sub_1408cdcc0(arg1 + 0x28, &var_48)
int64_t rax_11 = arg_10
int64_t* var_40
var_40[1] = rbx_2
*var_40 = rax_11
var_40[2].d = 0xffffffff
int32_t r8_7 = (rax_11 u>> 0x20).d + sub_140b5ead0(rax_11.d)
var_88.d = var_48
sub_1405b8300(arg1 + 0x28, &arg_8, r8_7, var_40, var_88, nullptr)
int64_t result = *(*(arg1 + 0x28) + sx.q(arg_8.d) * 0x18 + 8)
int16_t* rcx_20 = var_58

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

return result
