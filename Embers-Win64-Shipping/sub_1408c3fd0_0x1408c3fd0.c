// 函数: sub_1408c3fd0
// 地址: 0x1408c3fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x120) &= 0xfe
void* rsi = *(arg1 + 0x128)
*(arg1 + 0x121) = 0

if (rsi == 0)
    return 

int64_t* rax_1 = *(rsi + 0x2b0)

if (rax_1 != 0)
    int64_t* i = *rax_1
    
    for (void* rbp_3 = &i[sx.q(rax_1[1].d) * 2]; i != rbp_3; i = &i[2])
        int64_t* rbx_1 = i[1]
        void* rcx = *i
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (rcx != 0)
            sub_1408c29c0(rcx)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_4 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_4 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

*(rsi + 0x2e) &= 0xfb

if (sub_140db3510(rsi + 0x18) != 0)
    sub_140dc03a0(rsi + 0x18, *(rsi + 0x2e))

*(rsi + 0x2a8) = 0
