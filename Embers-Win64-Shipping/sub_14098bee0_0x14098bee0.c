// 函数: sub_14098bee0
// 地址: 0x14098bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t var_48 = 0
int64_t var_70 = 0
int32_t var_78 = 0
void* result = sub_140d2dfc0(sub_14098c670(), rax, 0, 0, 0, 0, 0, 0, 0)
*(result + 8) |= 0x1000000
void var_40
int64_t* rax_2
int32_t zmm6_1
rax_2, zmm6_1 = sub_140b58170(&var_40, "AppleImageUtils", 1)
int64_t rbx_1 = *rax_2
j_sub_140b3db50()
int64_t* rax_3 = sub_140b3da90(&data_143de7d78, rbx_1)
var_70.d = zmm6_1
var_78.b = arg3
void var_38
int64_t* rax_4 = (*(*rax_3 + 0x50))(rax_3, &var_38, arg1, zx.q(arg2), 0, var_70, arg4)

if (result + 0x50 != rax_4)
    *(result + 0x50) = *rax_4
    *rax_4 = 0
    sub_1405aeff0(result + 0x58, &rax_4[1])

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rdi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_30 + 8))(var_30, zx.q(rdi_1))

return result
