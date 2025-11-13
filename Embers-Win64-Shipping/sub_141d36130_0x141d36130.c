// 函数: sub_141d36130
// 地址: 0x141d36130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140b3db50()
void arg_10
void* rax_1 = sub_140b3dbe0(*sub_140b58170(&arg_10, "ChaosSolvers", 1))
int64_t* rcx_2 = *(rax_1 + 0x30)
int64_t rdx = *rcx_2
char rax_2 = (*(rdx + 0x20))(rcx_2, rdx)

if (arg1 != 4 && arg1 != rax_2)
    rax_2 = sub_141d40fa0(rax_1)
    uint32_t rcx_4 = zx.d(arg1)
    
    if (arg1 == 0)
        return sub_141d41220(rax_1)
    
    if (rcx_4 == 1)
        void*** rax_5 = j_sub_140a82f30(0x70)
        
        if (rax_5 == 0)
            *(rax_1 + 0x30) = 0
            return 0
        
        void*** rax_6 = sub_141d2c2b0(rax_5, rax_1)
        *(rax_1 + 0x30) = rax_6
        return rax_6
    
    if (rcx_4 == 2)
        void*** rax_3 = j_sub_140a82f30(0x70)
        
        if (rax_3 == 0)
            *(rax_1 + 0x30) = 0
            return 0
        
        void*** rax_4 = sub_141d2c370(rax_3, rax_1)
        *(rax_1 + 0x30) = rax_4
        return rax_4

return rax_2
