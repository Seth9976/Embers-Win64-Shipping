// 函数: sub_14289d520
// 地址: 0x14289d520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = sub_1428a6a70(0x10)

if (rax == 0)
    sub_1428a5670((rax + 0xb).d, 0x96, (rax + 0x41).d, "crypto\x509\x509_lu.c", 0x1a0)
    return zx.q((rax - 1).d)

int32_t rbp = 0
*rax = 0
*arg1 = 0
void* rax_2 = sub_1428a38f0(arg3)

if (sub_14289d720(arg2, 1, rax_2, rax) == 1)
    if (arg2[9](arg2, arg3, *(rax + 8)) != 0 && sub_1428a2070(arg2, *(rax + 8), 0xffffffff) != 0)
        void* rcx_6 = *(rax + 8)
        *arg1 = rcx_6
        sub_1428a3ba0(rcx_6)
        sub_14289d0f0(rax)
        return 1
    
    sub_14289d0f0(rax)
    void* rcx_9 = *arg2
    
    if (rcx_9 != 0)
        sub_1428a5c40(*(rcx_9 + 0x90))
        int32_t rax_8 = sub_14289dd60(*(*arg2 + 8), 1, rax_2, nullptr)
        int32_t rsi_1 = rax_8
        
        if (rax_8 != 0xffffffff && rsi_1 s< sub_142898c70(*(*arg2 + 8)))
            int32_t rax_17
            
            do
                int32_t* rax_11 = sub_142898ea0(*(*arg2 + 8), rsi_1)
                
                if (*rax_11 != 1)
                    break
                
                if (sub_1428a32a0(rax_2, sub_1428a3930(*(rax_11 + 8))) != 0)
                    break
                
                if (arg2[9](arg2, arg3, *(rax_11 + 8)) != 0)
                    void* rdx_6 = *(rax_11 + 8)
                    rbp = 1
                    *arg1 = rdx_6
                    
                    if (sub_1428a2070(arg2, rdx_6, 0xffffffff) != 0)
                        break
                
                rsi_1 += 1
                rax_17 = sub_142898c70(*(*arg2 + 8))
            while (rsi_1 s< rax_17)
        
        sub_1428a5d00(*(*arg2 + 0x90))
        void* rcx_22 = *arg1
        
        if (rcx_22 != 0)
            sub_1428a3ba0(rcx_22)
        
        return zx.q(rbp)
else
    sub_14289d0f0(rax)

return 0
