// 函数: sub_142899f50
// 地址: 0x142899f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

__chkstk(0x40)
int64_t* i = arg1

do
    int32_t rsi_1 = i[0xa].d
    void* rax = &i[0xa]
    int64_t* i_1 = i
    i = i[8]
    int32_t rcx = *rax
    *rax -= 1
    
    if (rcx s<= 1)
        int64_t r10_1 = i_1[1]
        
        if (r10_1 != 0 || i_1[2] != 0)
            int64_t rax_1 = i_1[2]
            int32_t var_18
            int64_t var_10
            
            if (rax_1 == 0)
                rax = r10_1(i_1, 1, 0, 0, 0, 1, var_18, var_10)
            else
                var_10 = 0
                var_18 = 1
                rax = rax_1(i_1, 1, 0, 0, 0, 0, 1, 0)
        
        if ((r10_1 == 0 && i_1[2] == 0) || rax.d s> 0)
            void* rax_2 = *i_1
            
            if (rax_2 != 0)
                int64_t rdx_1 = *(rax_2 + 0x50)
                
                if (rdx_1 != 0)
                    rdx_1(i_1)
            
            sub_1428a5f50(0xc, i_1, &i_1[0xd])
            sub_1428a5ba0(i_1[0xe])
            sub_1428a6780(i_1)
    
    if (rsi_1 s> 1)
        break
while (i != 0)
