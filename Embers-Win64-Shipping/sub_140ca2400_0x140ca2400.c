// 函数: sub_140ca2400
// 地址: 0x140ca2400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* i = *(arg1 + 0x40)

for (void* rsi_2 = &i[sx.q(*(arg1 + 0x48))]; i != rsi_2; i = &i[1])
    int64_t zmm0 = (*i).q
    uint64_t rax
    
    if (data_1439a9aa8 == data_1439a9ad4)
    labelid_7:
        rax = 0
    else
        int32_t rax_3 = sub_140b5ead0(zmm0.d) + zmm0:4.d
        void* rcx_3 = data_1439a9ae0
        void* rax_5 = &data_1439a9ad8
        
        if (rcx_3 != 0)
            rax_5 = rcx_3
        
        int32_t rax_6 = *(rax_5 + ((sx.q(data_1439a9ae8 - 1) & sx.q(rax_3)) << 2))
        
        if (rax_6 == 0xffffffff)
        label_140ca24b7:
            rax = 0
        else
            int64_t r8_1 = data_1439a9aa0
            int64_t rcx_4
            
            while (true)
                rcx_4 = sx.q(rax_6)
                int64_t rdx_3 = rcx_4 * 3
                
                if (*(r8_1 + (rdx_3 << 3)) == zmm0)
                    break
                
                rax_6 = *(r8_1 + (rdx_3 << 3) + 0x10)
                
                if (rax_6 == 0xffffffff)
                    goto label_140ca24b7_2
            
            if (rax_6 == 0xffffffff)
            label_140ca24b7_1:
                rax = 0
            else
                void* rax_8 = r8_1 + rcx_4 * 0x18
                
                if (rax_8 == 0)
                label_140ca24b7_2:
                    rax = 0
                else
                    rax = *(rax_8 + 8)
    
    if (rax == arg1)
        sub_140943590(&data_1439a9aa0, zmm0)
