// 函数: sub_14098bc20
// 地址: 0x14098bc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t var_38 = 0
int64_t var_50 = 0
char var_58 = 0
int64_t var_60 = 0
int32_t var_68 = 0
void* result = sub_140d2dfc0(sub_14098c670(), rax, 0, 0, 0, 0, 0, 0, 0)
*(result + 8) |= 0x1000000
void var_30
int64_t rbx_1 = *sub_140b58170(&var_30, "AppleImageUtils", 1)
j_sub_140b3db50()
int64_t* rax_3 = sub_140b3da90(&data_143de7d78, rbx_1)
var_50.b = arg6
var_58.d = arg5
var_60.b = arg4
var_68.b = arg3
void var_28
int64_t* rax_4 = (*(*rax_3 + 0x48))(rax_3, &var_28, arg1, zx.q(arg2), 0, 0, 0, 0)

if (result + 0x50 != rax_4)
    *(result + 0x50) = *rax_4
    *rax_4 = 0
    sub_1405aeff0(result + 0x58, &rax_4[1])

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rdi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rdi_1))

return result
