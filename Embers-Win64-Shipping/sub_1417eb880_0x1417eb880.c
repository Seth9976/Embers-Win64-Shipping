// 函数: sub_1417eb880
// 地址: 0x1417eb880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t var_38 = 0
void* result = sub_140d2dfc0(sub_1417f6510(), rax, 0, 0, 0, 0, 0, 0, 0)
void*** var_30 = nullptr
void*** rax_2 = sub_140a84c80(0, 0x20, 0)
var_30 = rax_2
int32_t var_28 = 2

if (rax_2 != 0)
    rax_2[1] = result
    *rax_2 = &data_142fde668
    rax_2[3] = sub_140a387b0()
    *rax_2 = &data_142fde6c0

int64_t* rax_4 = sub_1417eb6b0(arg1, arg2, arg3, arg4, 0, &var_30)
*(result + 0x58) = rax_4
*arg5 = rax_4
void*** rax_6

if (var_28 == 0)
    rax_6 = var_30
label_1417eb9b7:
    
    if (rax_6 != 0)
        sub_140a74f90(rax_6)
else
    void*** rcx_4 = var_30
    
    if (rcx_4 != 0)
        (*rcx_4)[7](rcx_4, 0)
        rax_6 = var_30
        
        if (rax_6 != 0)
            rax_6 = sub_140a84c80(rax_6, 0, 0)
            var_30 = rax_6
        
        int32_t var_28_1 = 0
        goto label_1417eb9b7
return result
