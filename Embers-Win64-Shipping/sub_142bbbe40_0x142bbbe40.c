// 函数: sub_142bbbe40
// 地址: 0x142bbbe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x78)
int32_t rbx = 0
int32_t rcx = *(arg1 + 8)
int32_t r13 = arg2
int32_t result = 0

if ((rcx.b & 8) != 0)
    void var_38
    int16_t arg_8
    
    if ((arg4.b & 0x10) == 0)
        if (((*(arg1 + 4) & 0x7fff0000) != 0 || test_bit(rcx, 0xf)) && (*(arg1 + 0x418) & 2) == 0)
            return 7
        
        if (*(arg1 + 0x15a) != 0)
            if (arg3 != 0)
                uint32_t* rsi_2 = arg6
                
                do
                    (*(*(arg1 + 0x2d0) + 0x118))(arg1, 0, zx.q(rbx + r13), &var_38, &arg_8)
                    rbx += 1
                    *rsi_2 = zx.d(arg_8)
                    rsi_2 = &rsi_2[1]
                while (rbx u< arg3)
            
            return 0
    else
        if (((*(arg1 + 4) & 0x7fff0000) != 0 || test_bit(rcx, 0xf))
                && (*(arg1 + 0x418) & 0x10) == 0)
            return 7
        
        if (*(arg1 + 0x190) != 0)
            if (arg3 == 0)
                return 0
            
            uint32_t* rsi_1 = arg6
            
            do
                arg2.b = 1
                (*(*(arg1 + 0x2d0) + 0x118))(arg1, arg2, zx.q(rbx + r13), &var_38, &arg_8)
                rbx += 1
                *rsi_1 = zx.d(arg_8)
                rsi_1 = &rsi_1[1]
            while (rbx u< arg3)
            
            return 0

int32_t r12_1 = arg4 | 0x100
int32_t r14_1 = 0

if (arg3 != 0)
    uint32_t* r15_1 = arg6
    
    do
        int64_t* rdx = *(arg1 + 0x80)
        
        if (rsi == 0)
            return 0x25
        
        int32_t r9_3 = r12_1 | 3
        
        if (rdx != 0)
            r9_3 = r12_1
        
        if ((r9_3.b & 1) != 0)
            rdx = nullptr
        else if (rdx != 0 && *rdx != *(rsi + 8))
            return 0x23
        
        result = sub_142bc1620(rsi, rdx, r14_1 + r13, r9_3, arg5)
        
        if (result != 0)
            break
        
        uint32_t rcx_4
        
        if ((r12_1.b & 0x10) == 0)
            rcx_4 = *(rsi + 0x50)
        else
            rcx_4 = *(rsi + 0x54)
        
        *r15_1 = rcx_4
        r14_1 += 1
        r15_1 = &r15_1[1]
    while (r14_1 u< arg3)

return result
