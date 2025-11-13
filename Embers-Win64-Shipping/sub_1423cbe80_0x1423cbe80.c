// 函数: sub_1423cbe80
// 地址: 0x1423cbe80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int64_t* rcx = arg1[0x1c]
    
    if (rcx == 0)
        break
    
    if (data_143de5432 != 0 || arg1[0xf] == 0)
        (*(*rcx + 0x20))()
        rcx = arg1[0x1c]
    
    int32_t rdi_1
    rdi_1.b = data_143f138f4 == 0
    
    if (((arg1[1].d u>> 0xf).b & 1) != 0 && (*(*rcx + 0x28))(rcx) == 2)
        rdi_1 = 4
    
    sub_14239a540(arg1[0x1c], rdi_1)
    
    if (*(arg1[0x1c] + 0x58) == 0)
        int64_t* rcx_3 = arg1[0x1c]
        arg1[0x1c] = 0
        
        if (rcx_3 != 0)
            sub_142394bb0(rcx_3)
        
        break
    
    if (sub_142391d40() != 0)
        break
    
    sub_140b73230(sub_1419a21e0(0))

void* rax_10 = sub_1405e25d0(sub_141fe0f50(sub_141fe0c50(0)))
char rcx_6 = *(arg1 + 0x5e)

if (rcx_6 == 0)
    rcx_6 = *(zx.q(*(arg1 + 0x5f)) * 0x54 + *(rax_10 + 0x28) + 0x50)

if (rcx_6 == 2)
    void* rcx_8 = arg1[0x1a]
    
    if (rcx_8 != 0)
        int32_t r8_1 = *(rcx_8 + 0x20)
        
        if (r8_1 s> 0)
            int32_t rdi_2 = arg1[7].d
            
            if (rdi_2 s<= 0)
                rdi_2 = r8_1 - 1
                
                if (r8_1 - 1 s> 0)
                    rdi_2 = 0
            
            sub_1423c7380(rcx_8 + 0x18, rdi_2 + 1, r8_1 - rdi_2 - 1, 1)
            sub_1423c7380(arg1[0x1a] + 0x18, 0, rdi_2, 1)
            int32_t* rdx_4 = arg1[0x1a]
            *rdx_4 = ***(rdx_4 + 0x18)
            void* rdx_5 = arg1[0x1a]
            *(rdx_5 + 4) = *(**(rdx_5 + 0x18) + 4)

return sub_1423cc030(arg1) __tailcall
