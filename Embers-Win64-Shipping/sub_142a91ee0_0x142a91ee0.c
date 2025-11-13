// 函数: sub_142a91ee0
// 地址: 0x142a91ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
sub_142a92510()

if (data_144015b90 == 0)
    return 0

sub_142a91400()
sub_142a860a0(&data_144015c00)
int32_t rbp = 0
int32_t i

do
    int64_t* rcx_1 = data_144015b90
    i = 0
    int32_t arg_8 = 0xffffffff
    
    for (int32_t* j = sub_142a86e70(rcx_1, &arg_8); j != 0; 
            j = sub_142a86e70(data_144015b90, &arg_8))
        void* rbx_1 = *(j + 8)
        
        if (*(rbx_1 + 4) != 0)
            i += 1
        else
            rsi += 1
            sub_142a87020(data_144015b90, j)
            bool cond:0_1 = *(rbx_1 + 4) u> 0
            *(rbx_1 + 0x18) = 0
            
            if (not(cond:0_1))
                int64_t rdx_3 = *(*(rbx_1 + 0x20) + 0x10)
                
                if (rdx_3 != 0)
                    rdx_3(rbx_1)
                
                void* rcx_4 = *(rbx_1 + 8)
                
                if (rcx_4 != 0)
                    sub_142a95ec0(rcx_4)
                
                sub_142a7dcd0(rbx_1)
    
    rbp += 1
    
    if (rbp != 1)
        break
while (i s> 0)
sub_142a91400()
sub_142a860d0(&data_144015c00)
return zx.q(rsi)
