// 函数: sub_140b9bee0
// 地址: 0x140b9bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15

if (*(arg1 + 0xcb) != 0)
    r15 = 0
else
    r15 = *(arg1 + 0x58)

char* i = *(arg1 + 0x60)

for (void* rsi_2 = &i[sx.q(*(arg1 + 0x68)) << 4]; i != rsi_2; i = &i[0x10])
    if (*i == arg2 && i[1] == 0)
        int64_t* rdi_1 = *(i + 8)
        i[1] = 1
        
        if (rdi_1[1].d != 0)
            int64_t* rcx = *rdi_1
            
            if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
                int64_t* rcx_1
                
                if (rdi_1[1].d == 0)
                    rcx_1 = nullptr
                else
                    rcx_1 = *rdi_1
                
                (*(*rcx_1 + 0x50))(rcx_1, arg1 + 0x14, r15, zx.q(arg3))
