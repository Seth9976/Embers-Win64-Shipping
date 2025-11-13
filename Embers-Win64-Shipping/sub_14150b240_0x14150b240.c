// 函数: sub_14150b240
// 地址: 0x14150b240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x90) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* rbx_1 = *(r14_1 + *(arg1 + 0x88))
        
        if (rbx_1 != 0)
            int32_t j = 0
            
            if (*(rbx_1 + 0x15) u> 0)
                void* rdi_1 = rbx_1 + 0x16
                
                do
                    int32_t rcx = *(rbx_1 + 0x10)
                    sub_141998630(rcx, rcx, 0, *rdi_1)
                    rdi_1 += 1
                    j += 1
                while (j s< zx.d(*(rbx_1 + 0x15)))
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x90))

void* rsi_1 = arg1 + 8
int64_t i_2 = 0x10
int64_t i_1

do
    void* rbx_2 = *rsi_1
    
    if (rbx_2 != 0)
        uint64_t rdi_2 = 0
        
        if (((zx.d(*(rbx_2 + 0x1a)) + 3) & 0xfffffffc) u> 0)
            do
                int32_t rcx_1 = *(rbx_2 + 0x690)
                sub_141998630(rcx_1, rcx_1, 0, *(rdi_2 + rbx_2 + 0x5f8))
                rdi_2 = zx.q(rdi_2.d + 1)
            while (rdi_2.d u< (zx.d(*(rbx_2 + 0x1a)) + 3) u>> 2)
    
    rsi_1 += 8
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
