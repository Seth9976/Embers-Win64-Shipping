// 函数: sub_1417ebe50
// 地址: 0x1417ebe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t var_38 = 0
int32_t var_68 = 0
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

var_68.q = arg5
int64_t* rax_6 = sub_1417ebc50(arg1, arg2, arg3, arg4, nullptr, arg6, 0, &var_30)
*(result + 0x58) = rax_6
*arg7 = rax_6
void*** rax_8

if (var_28 == 0)
    rax_8 = var_30
label_1417ebfa1:
    
    if (rax_8 != 0)
        sub_140a74f90(rax_8)
else
    void*** rcx_4 = var_30
    
    if (rcx_4 != 0)
        (*rcx_4)[7](rcx_4, 0)
        rax_8 = var_30
        
        if (rax_8 != 0)
            rax_8 = sub_140a84c80(rax_8, 0, 0)
            var_30 = rax_8
        
        int32_t var_28_1 = 0
        goto label_1417ebfa1
return result
