// 函数: sub_142371fe0
// 地址: 0x142371fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x50)
int128_t entry_zmm2

if (rsi != 0)
    int32_t i = 0
    rsi[0xc].b = 0
    
    if (rsi[1].d s> 0)
        int64_t rdi_1 = 0
        
        do
            void* rbx_2 = *(*rsi + (rdi_1 << 3))
            
            if (*(rbx_2 + 0xec) u> 0)
                sub_141997f50(rbx_2 + 0x178)
                sub_141997f50(rbx_2 + 0x70)
                sub_141997f50(rbx_2 + 0xf8)
                sub_141997f50(rbx_2 + 0x138)
                sub_141997f50(rbx_2 + 0x1b8)
                sub_141997f50(rbx_2 + 0x2b8)
                void* rcx_6 = *(rbx_2 + 0x1f8)
                
                if (rcx_6 != 0)
                    sub_141997f50(rcx_6 + 0xc0)
                    sub_141997f50(*(rbx_2 + 0x1f8))
                    sub_141997f50(*(rbx_2 + 0x1f8) + 0x80)
                    sub_141997f50(*(rbx_2 + 0x1f8) + 0x40)
                
                sub_141997f50(rbx_2 + 0x200)
                void* rcx_14 = *(rbx_2 + 0x38)
                
                if (rcx_14 != 0)
                    sub_141feae10(rcx_14 + 0x50)
                
                int64_t* rbx_4 = rdi_1 * 0x430 + rsi[2]
                sub_141997f50(rbx_4)
                entry_zmm2 = sub_141997f50(&rbx_4[0x42])
                int64_t* rcx_18 = rbx_4[0x84]
                
                if (rcx_18 != 0)
                    entry_zmm2 = sub_141997f50(rcx_18)
                
                int64_t* rcx_19 = rbx_4[0x85]
                
                if (rcx_19 != 0)
                    entry_zmm2 = sub_141997f50(rcx_19)
            else if (rdi_1 == 0)
                void* rcx_20 = *(rbx_2 + 0x38)
                
                if (rcx_20 != 0)
                    sub_141feae10(rcx_20 + 0x50)
            
            i += 1
            rdi_1 += 1
        while (i s< rsi[1].d)

int128_t entry_zmm3
int64_t result = sub_141997ac0(arg1 + 0x98, 0, entry_zmm2, entry_zmm3)
*(arg1 + 0x94) &= 0xbf
return result
