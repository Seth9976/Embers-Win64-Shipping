// 函数: sub_142a618e0
// 地址: 0x142a618e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
sub_142a615c0()
sub_142a860a0(&data_144015690)
int64_t* rcx = data_144015678

if (rcx == 0)
    sub_142a615c0()
    sub_142a860d0(&data_144015690)
    return 0

int64_t rsi
int64_t arg_18 = rsi

while (true)
    int32_t arg_8 = 0xffffffff
    rsi.b = 0
    int32_t* i = sub_142a86e70(rcx, &arg_8)
    
    if (i == 0)
    label_142a619f4:
        sub_142a615c0()
        sub_142a860d0(&data_144015690)
        return zx.q(rdi)
    
    do
        int64_t* rbx_1 = *(i + 8)
        
        if (*(rbx_1 + 0x6c) == 0)
            rdi += 1
            rsi.b = 1
            sub_142a87020(data_144015678, i)
            sub_142ac3f10(&rbx_1[5])
            int64_t rcx_3 = *rbx_1
            
            if (rcx_3 != 0 && rcx_3 != &rbx_1[0xd])
                sub_142a7dcd0(rcx_3)
            
            int64_t rcx_4 = rbx_1[1]
            
            if (rcx_4 != 0)
                sub_142a7dcd0(rcx_4)
            
            void* rax_3 = rbx_1[4]
            
            if (rax_3 != 0)
                *(rax_3 + 0x6c) -= 1
            
            void* rax_4 = rbx_1[3]
            
            if (rax_4 != 0)
                int64_t* rdx_3 = rax_4 + 0x18
                
                while (*(rax_4 + 0x18) != 0)
                    rax_4 = *rdx_3
                    rdx_3 = rax_4 + 0x18
                
                *(rax_4 + 0x6c) -= 1
            
            sub_142a7dcd0(rbx_1)
        
        i = sub_142a86e70(data_144015678, &arg_8)
    while (i != 0)
    
    if (rsi.b == 0)
        goto label_142a619f4
    
    rcx = data_144015678
