// 函数: sub_142c7b610
// 地址: 0x142c7b610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
void* rcx = *arg1
int64_t rsi = -1
char* rdi = *(rcx + 0xa80)

do
    rsi += 1
while (rdi[rsi] != 0)

if (arg2 != 0x2a)
    if (arg2 != 0x2b)
        arg1[0xe8].d |= 1
        r14 = sub_142c7b200(arg1)
    else
        int32_t rax_9 = *(rcx + 0x5f8)
        
        if (rax_9 == 0 || arg1[0x58].b != 0)
            r14 = sub_142c7b200(arg1)
        else if (arg1[0xea].b != 0)
            int32_t rax_10 = gzprintf(&arg1[0xd3], &data_1434ccff0, "STLS", arg4)
            
            if (rax_10 == 0)
                arg1[0xe1].d = 3
            
            r14 = rax_10
        else if (rax_9 == 1)
            r14 = sub_142c7b200(arg1)
        else
            sub_142c64760(rcx, "STLS not supported.", arg3, arg4)
            r14 = 0x40
else if (rsi u< 4)
label_142c7b687:
    
    if (rsi u>= 5 && *rdi == 0x4c534153 && rdi[4] == 0x20)
        arg1[0xe8].d |= 4
        void* rdi_1 = &rdi[5]
        char* rbx_1
        
        for (void* i = rsi - 5; i != 0; i -= rbx_1)
            while (true)
                char rax_4 = *rdi_1
                
                if (rax_4 u> 0x20)
                    break
                
                if (not(test_bit(0x100002600, sx.q(rax_4))))
                    break
                
                rdi_1 += 1
                void* i_1 = i
                i -= 1
                
                if (i_1 == 1)
                    return zx.q(r14)
            
            rbx_1 = nullptr
            
            if (i != 0)
                do
                    char rax_6 = *(rbx_1 + rdi_1)
                    
                    if (rax_6 u<= 0x20 && test_bit(0x100002600, sx.q(rax_6)))
                        break
                    
                    rbx_1 = &rbx_1[1]
                while (rbx_1 u< i)
            
            int64_t arg_8
            int32_t rax_8 = sub_142c8f8d0(rdi_1, rbx_1, &arg_8)
            
            if (rax_8 != 0 && arg_8 == rbx_1)
                *(arg1 + 0x72c) |= rax_8
            
            rdi_1 += rbx_1
else
    int32_t rax_1 = *rdi
    
    if (rax_1 != 0x534c5453)
        if (rax_1 != 0x52455355)
            goto label_142c7b687
        
        arg1[0xe8].d |= 1
    else
        arg1[0xea].b = 1

return zx.q(r14)
