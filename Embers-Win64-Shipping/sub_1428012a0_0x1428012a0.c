// 函数: sub_1428012a0
// 地址: 0x1428012a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
zmm1.o = zx.o(0)
int32_t var_40 = 0xbf800000
int32_t var_3c = 0
int32_t var_50 = 0
int64_t var_48 = 0
int64_t var_60 = 0
int32_t var_58 = 1
int16_t var_38 = 0
var_60.d = (*(*arg2 + 0x38))(arg2, zmm1)
var_60:4.d = (*(*arg2 + 0x40))(arg2)
int32_t var_58_1 = (*(*arg2 + 0x48))(arg2)
int64_t var_48_1 = 0
int32_t var_50_1 = (*(*arg2 + 0x50))(arg2)
(*(*arg2 + 0x58))(arg2)
int32_t var_40_1 = 0xbf800000
(*(*arg2 + 0x60))(arg2)
int32_t var_3c_1 = 0xbf800000
void arg_10
int16_t var_38_1 = *(*(*arg2 + 0x68))(arg2, &arg_10)
int32_t rax_13 = (*(*arg2 + 0x40))(arg2)
int32_t rax_15 = (*(*arg2 + 0x38))(arg2)
int64_t* arg_28
int64_t* r14 = arg_28
int32_t rbx_2 = (rax_13 * rax_15) << 2
void* rax_16 = sub_142807530(r14[2] + 8, rbx_2)
int64_t r9 = *arg2
int64_t rdx_3 = (*(r9 + 0x28))(arg2, rax_16, zx.q(rbx_2), r9)
int64_t* var_78 = r14[2]
int64_t var_70 = 0
int64_t var_68 = 0
int64_t var_88 = arg3
sub_142806cb0(&var_78, rdx_3)
int32_t result = var_68:4.d

if ((result & 0x7fffffff) != 0 && result s>= 0 && var_70 != 0)
    int64_t* rcx_15 = *var_78
    result = (*(*rcx_15 + 0x10))(rcx_15, var_70)

int32_t rsi_2 = var_60:4.d * var_60.d

if (rsi_2 != 0 && rax_16 != 0)
    int32_t rbx_3 = 0
    
    if (rsi_2 != 0)
        void* rdi_2 = rax_16 + 2
        
        do
            uint32_t rcx_16
            
            if (rbx_3 != 0)
                rcx_16 = rbx_3 u/ 6 * 3
            
            char const* const rdx_7
            int64_t r8_2
            
            if (rbx_3 == 0 || rbx_3 != rcx_16 * 2)
                r8_2 = 1
                rdx_7 = &data_1434cf410
            else
                r8_2 = 4
                rdx_7 = "\n\t\t\t"
            
            (**r14)(r14, rdx_7, r8_2)
            arg_28.d = 0
            arg_28.b = *(rdi_2 - 2)
            arg_28:1.b = *(rdi_2 - 1)
            arg_28:2.b = *rdi_2
            arg_28:3.b = *(rdi_2 + 1)
            sub_1427e3ab0(r14)
            rbx_3 += 1
            rdi_2 += 4
        while (rbx_3 u< rsi_2)
    
    arg_28.b = 0
    (**r14)(r14, &arg_28, 1)
    result = (*(*arg4 + 0x10))(arg4, "samples", r14[4])
    r14[3] = 0

if (rax_16 == 0)
    return result

return sub_142807300(r14[2] + 8, rax_16 - 0x10, *(rax_16 - 8))
