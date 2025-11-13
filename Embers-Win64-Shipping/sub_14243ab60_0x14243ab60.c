// 函数: sub_14243ab60
// 地址: 0x14243ab60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x100)

if (result != 0)
    return result

void* rcx = *(arg1 + 0x30)
int64_t* rbx_1

if (rcx == 0)
    rbx_1 = nullptr
else
    void* rax = sub_1420e4e60(rcx)
    
    if (rax == 0)
        rbx_1 = nullptr
    else
        rbx_1 = *(rax + 0x258)
        
        if (rbx_1 == 0)
            rbx_1 = nullptr
        else
            void* rax_1 = sub_14249bc70()
            
            if (rax_1 == 0)
                rbx_1 = nullptr
            else
                int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                
                if (rax_2.d s> rbx_1[7].d || *(rbx_1[6] + (rax_2 << 3)) != rax_1 + 0x30)
                    rbx_1 = nullptr

if (rbx_1 == 0)
    rbx_1 = sub_14249bc70()

int64_t var_38
__builtin_memset(&var_38, 0, 0x29)
char var_f
char var_f_1 = (var_f & 0xf8) | 8
char var_e_1 = 0
int32_t var_c_1 = 8
void* rax_6 = sub_1420efae0(arg1, rbx_1, nullptr, nullptr, &var_38)
*(arg1 + 0x100) = rax_6
*(rax_6 + 0x25c) = 0xfff0bdc0
return *(arg1 + 0x100)
