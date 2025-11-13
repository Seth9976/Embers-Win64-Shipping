// 函数: sub_141d4d130
// 地址: 0x141d4d130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xd0)
int32_t rsi = *(arg1 + 0x78)
int32_t rsi_1 = rsi - 1

if (rsi - 1 s>= 0)
    int64_t r14_2 = sx.q(rsi_1) << 4
    int32_t temp4_1
    
    do
        int64_t* rdx_1 = *(arg1 + 0x70)
        int64_t* rdi_1 = *(rdx_1 + r14_2 + 8)
        
        if (rdi_1 == 0)
            sub_141c8bf50(arg1 + 0x70, rsi_1, 1, 1)
        else
            int32_t rax_1 = 0
            bool z_1
            
            if (0 == rdi_1[1].d)
                rdi_1[1].d = 0
                z_1 = true
            else
                rax_1 = rdi_1[1].d
                z_1 = false
            
            if (z_1)
            label_141d4d1b8:
                rdi_1 = nullptr
                sub_141c8bf50(arg1 + 0x70, rsi_1, 1, 1)
            else
                while (true)
                    bool z_2
                    
                    if (rax_1 == rdi_1[1].d)
                        rdi_1[1].d = rax_1 + 1
                        z_2 = true
                    else
                        rdi_1[1].d
                        z_2 = false
                    
                    if (z_2)
                        break
                    
                    rax_1 = 0
                    bool z_3
                    
                    if (0 == rdi_1[1].d)
                        rdi_1[1].d = 0
                        z_3 = true
                    else
                        rax_1 = rdi_1[1].d
                        z_3 = false
                    
                    if (z_3)
                        goto label_141d4d1b8
                
                if (rdi_1 == 0)
                    sub_141c8bf50(arg1 + 0x70, rsi_1, 1, 1)
                else
                    int64_t* rcx_20 = *(rdx_1 + r14_2)
                    
                    if (rcx_20 == 0)
                        sub_141c8bf50(arg1 + 0x70, rsi_1, 1, 1)
                    else
                        (*(*rcx_20 + 0x10))(rcx_20)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rax_5 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_5 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        r14_2 -= 0x10
        temp4_1 = rsi_1
        rsi_1 -= 1
    while (temp4_1 - 1 s>= 0)

sub_141d4cf90(arg1 + 0x80)
int32_t rsi_2 = *(arg1 + 0x98)
int32_t rsi_3 = rsi_2 - 1

if (rsi_2 - 1 s>= 0)
    int64_t r14_4 = sx.q(rsi_3) << 4
    int32_t temp5_1
    
    do
        int64_t* rdx_3 = *(arg1 + 0x90)
        int64_t* rdi_2 = *(rdx_3 + r14_4 + 8)
        
        if (rdi_2 == 0)
            sub_141c8bf50(arg1 + 0x90, rsi_3, 1, 1)
        else
            int32_t rax_7 = 0
            bool z_4
            
            if (0 == rdi_2[1].d)
                rdi_2[1].d = 0
                z_4 = true
            else
                rax_7 = rdi_2[1].d
                z_4 = false
            
            if (z_4)
            label_141d4d278:
                rdi_2 = nullptr
                sub_141c8bf50(arg1 + 0x90, rsi_3, 1, 1)
            else
                while (true)
                    bool z_5
                    
                    if (rax_7 == rdi_2[1].d)
                        rdi_2[1].d = rax_7 + 1
                        z_5 = true
                    else
                        rdi_2[1].d
                        z_5 = false
                    
                    if (z_5)
                        break
                    
                    rax_7 = 0
                    bool z_6
                    
                    if (0 == rdi_2[1].d)
                        rdi_2[1].d = 0
                        z_6 = true
                    else
                        rax_7 = rdi_2[1].d
                        z_6 = false
                    
                    if (z_6)
                        goto label_141d4d278
                
                if (rdi_2 == 0)
                    sub_141c8bf50(arg1 + 0x90, rsi_3, 1, 1)
                else
                    int64_t* rcx_21 = *(rdx_3 + r14_4)
                    
                    if (rcx_21 == 0)
                        sub_141c8bf50(arg1 + 0x90, rsi_3, 1, 1)
                    else
                        (*(*rcx_21 + 0x10))(rcx_21)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t rax_11 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (rax_11 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        r14_4 -= 0x10
        temp5_1 = rsi_3
        rsi_3 -= 1
    while (temp5_1 - 1 s>= 0)

sub_141d4cf90(arg1 + 0xa0)
int32_t rsi_4 = *(arg1 + 0xb8)
int32_t rsi_5 = rsi_4 - 1

if (rsi_4 - 1 s>= 0)
    int64_t r14_6 = sx.q(rsi_5) << 4
    int32_t temp6_1
    
    do
        int64_t* rdx_5 = *(arg1 + 0xb0)
        int64_t* rdi_3 = *(rdx_5 + r14_6 + 8)
        
        if (rdi_3 == 0)
            sub_141c8bf50(arg1 + 0xb0, rsi_5, 1, 1)
        else
            int32_t rax_13 = 0
            bool z_7
            
            if (0 == rdi_3[1].d)
                rdi_3[1].d = 0
                z_7 = true
            else
                rax_13 = rdi_3[1].d
                z_7 = false
            
            if (z_7)
            label_141d4d338:
                rdi_3 = nullptr
                sub_141c8bf50(arg1 + 0xb0, rsi_5, 1, 1)
            else
                while (true)
                    bool z_8
                    
                    if (rax_13 == rdi_3[1].d)
                        rdi_3[1].d = rax_13 + 1
                        z_8 = true
                    else
                        rdi_3[1].d
                        z_8 = false
                    
                    if (z_8)
                        break
                    
                    rax_13 = 0
                    bool z_9
                    
                    if (0 == rdi_3[1].d)
                        rdi_3[1].d = 0
                        z_9 = true
                    else
                        rax_13 = rdi_3[1].d
                        z_9 = false
                    
                    if (z_9)
                        goto label_141d4d338
                
                if (rdi_3 == 0)
                    sub_141c8bf50(arg1 + 0xb0, rsi_5, 1, 1)
                else
                    int64_t* rcx_22 = *(rdx_5 + r14_6)
                    
                    if (rcx_22 == 0)
                        sub_141c8bf50(arg1 + 0xb0, rsi_5, 1, 1)
                    else
                        (*(*rcx_22 + 0x10))(rcx_22)
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rax_17 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_17 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        r14_6 -= 0x10
        temp6_1 = rsi_5
        rsi_5 -= 1
    while (temp6_1 - 1 s>= 0)

int64_t* rcx_15 = *(arg1 + 0x130)

if (rcx_15 != 0)
    int64_t* rax_20 = (*(*rcx_15 + 0x28))(rcx_15)
    int64_t rdx_7 = *rax_20
    (*(rdx_7 + 0x28))(rax_20, rdx_7)

*(arg1 + 0x128) = -0x8000000000000000
int64_t result = *(arg1 + 0x170)
*(arg1 + 0x160)
__builtin_memcpy(arg1 + 0x160, 
    "\x00\x00\x00\x00\x00\x00\x00\x80\x00\x00\x00\x00\x00\x00\x00\x80\x00\x00\x00\x00\x00\x00\x00\x80", 
    0x18)

if (arg1 == -0xd0)
    return result

return LeaveCriticalSection(arg1 + 0xd0) __tailcall
