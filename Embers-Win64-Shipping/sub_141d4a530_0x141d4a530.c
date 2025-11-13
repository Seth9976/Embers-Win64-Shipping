// 函数: sub_141d4a530
// 地址: 0x141d4a530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t r14
int64_t arg_20 = r14
int64_t* rcx = *(arg1 + 0x140)

if (rcx != 0)
    char rbx_1 = *(arg1 + 0x138)
    void arg_10
    int64_t* rax_2 = (**rcx)(rcx, &arg_10)
    int64_t r8_1 = *(arg1 + 0x88)
    int64_t rcx_1 = 0
    int64_t rax_3 = *rax_2
    
    if (r8_1 != -0x8000000000000000)
        rcx_1 = rax_3 - r8_1
    
    *(arg1 + 0x20) = rcx_1
    *(arg1 + 0x88) = rax_3
    *(arg1 + 0x90) = rbx_1

sub_141d4b670(arg1 + 0x18)
int32_t rsi = *(arg1 + 0x38)
int32_t rsi_1 = rsi - 1

if (rsi - 1 s>= 0)
    r14 = sx.q(rsi_1) << 4
    int32_t temp4_1
    
    do
        int64_t* rdx_4 = *(arg1 + 0x30)
        int64_t* rbx_2 = *(rdx_4 + r14 + 8)
        
        if (rbx_2 == 0)
            sub_141c8bf50(arg1 + 0x30, rsi_1, 1, 1)
        else
            int32_t rax_4 = 0
            bool z_1
            
            if (0 == rbx_2[1].d)
                rbx_2[1].d = 0
                z_1 = true
            else
                rax_4 = rbx_2[1].d
                z_1 = false
            
            if (z_1)
            label_141d4a5f7:
                rbx_2 = nullptr
                sub_141c8bf50(arg1 + 0x30, rsi_1, 1, 1)
            else
                while (true)
                    bool z_2
                    
                    if (rax_4 == rbx_2[1].d)
                        rbx_2[1].d = rax_4 + 1
                        z_2 = true
                    else
                        rbx_2[1].d
                        z_2 = false
                    
                    if (z_2)
                        break
                    
                    rax_4 = 0
                    bool z_3
                    
                    if (0 == rbx_2[1].d)
                        rbx_2[1].d = 0
                        z_3 = true
                    else
                        rax_4 = rbx_2[1].d
                        z_3 = false
                    
                    if (z_3)
                        goto label_141d4a5f7
                
                if (rbx_2 == 0)
                    sub_141c8bf50(arg1 + 0x30, rsi_1, 1, 1)
                else
                    int64_t* rcx_10 = *(rdx_4 + r14)
                    
                    if (rcx_10 == 0)
                        sub_141c8bf50(arg1 + 0x30, rsi_1, 1, 1)
                    else
                        (*(*rcx_10 + 8))(rcx_10, *(arg1 + 0x20), *(arg1 + 0x88))
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_8 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_8 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        r14 -= 0x10
        temp4_1 = rsi_1
        rsi_1 -= 1
    while (temp4_1 - 1 s>= 0)

r14.b = 0
*(arg1 + 0x134) += 1
int32_t rax_10 = *(arg1 + 0x128)
int32_t rcx_7 = *(arg1 + 0x134)
int64_t rbp = sx.q(rax_10 - 1)

if (rax_10 - 1 s>= 0)
    int64_t rsi_3 = rbp << 4
    int64_t temp3_1
    
    do
        int64_t rax_12 = *(arg1 + 0x120)
        
        if (*(rsi_3 + rax_12 + 8) == 0)
            r14.b = 1
        else
            int64_t* rcx_8 = *(rsi_3 + rax_12)
            
            if (rcx_8 == 0)
                r14.b = 1
            else if ((*(*rcx_8 + 0x50))(rcx_8) == 0)
                r14.b = 1
        
        rsi_3 -= 0x10
        temp3_1 = rbp
        rbp -= 1
    while (temp3_1 - 1 s>= 0)
    rcx_7 = *(arg1 + 0x134)

int32_t result = rcx_7 - 1
*(arg1 + 0x134) = result

if (r14.b != 0 && result s<= 0)
    int32_t rbp_1 = *(arg1 + 0x128)
    int32_t rdx_6 = rbp_1
    
    if (rbp_1 s> 0)
        int64_t* rsi_4 = nullptr
        
        do
            int64_t rax_15 = *(arg1 + 0x120)
            
            if (*(rsi_4 + rax_15 + 8) == 0)
                sub_1405a4880(arg1 + 0x120, rdi, 1, 1)
            else
                int64_t* rcx_9 = *(rsi_4 + rax_15)
                
                if (rcx_9 == 0)
                    sub_1405a4880(arg1 + 0x120, rdi, 1, 1)
                else if ((*(*rcx_9 + 0x20))(rcx_9) != 0)
                    sub_1405a4880(arg1 + 0x120, rdi, 1, 1)
                else
                    rdi += 1
                    rsi_4 = &rsi_4[2]
            
            rdx_6 = *(arg1 + 0x128)
        while (rdi s< rdx_6)
    
    result = rdx_6 * 2
    
    if (result s<= 2)
        result = 2
    
    *(arg1 + 0x130) = result
    
    if (rbp_1 s> result && *(arg1 + 0x12c) != rdx_6)
        return sub_1405a5410(arg1 + 0x120, rdx_6)

return result
