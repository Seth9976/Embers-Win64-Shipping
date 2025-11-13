// 函数: sub_141f59680
// 地址: 0x141f59680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x15]

if (rax == 0)
    rax = sub_141ee69e0(arg1)

uint32_t rsi = zx.d(*(rax + 0x118))
void* rax_1 = arg1[0xb6]
int64_t* rbp

if (rax_1 == 0)
    void* rbp_1 = arg1[0x86]
    
    if (rbp_1 != 0)
        rbp = *(rbp_1 + 0x58)
        goto label_141f596d7
else
    rbp = *(rax_1 + 0x40)
label_141f596d7:
    
    if (rbp != 0)
        int32_t rcx = arg1[0xab].d
        
        if (rcx s>= 0 && rcx s< rbp[1].d && *(arg1 + 0x5a6) s>= 0 && rax_1 != 0)
            int32_t rax_2 = sub_142337400(rbp)
            int64_t* rcx_2 = arg1[0xb6]
            int64_t rdx_1 = *rcx_2
            int32_t rcx_3
            
            if ((*(rdx_1 + 0x40))(rcx_2, rdx_1) != 0)
                rcx_3 = 0x7fffffff
            else if (rsi == 1)
                rcx_3 = 0x4b
            else if (rsi == 3)
                rcx_3 = 0x10000
            else
                rcx_3 = 0
            
            if (rax_2 s<= rcx_3)
                void*** rax_4 = j_sub_140a82f30(0x230)
                
                if (rax_4 != 0)
                    return sub_142306200(rax_4, arg1, rbp)
return nullptr
