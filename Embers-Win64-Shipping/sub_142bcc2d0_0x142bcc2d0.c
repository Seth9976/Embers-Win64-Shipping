// 函数: sub_142bcc2d0
// 地址: 0x142bcc2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg2 + 0x98)
int32_t* r10 = *(arg2 + 0x140)
int32_t rcx = *(arg2 + 0x13c)
int32_t r9 = 3
int32_t rax = 0

if (rcx == 0)
    goto label_142bcc3a3

int32_t* r8_1 = r10

while (*r8_1 != 4)
    rax += 1
    r8_1 = &r8_1[4]
    
    if (rax u>= rcx)
        goto label_142bcc3a3

int32_t rax_1 = *(arg1 + 0xc)
void* rbx_3 = &r10[zx.q(rax) * 4]
int32_t rdx = *(rbx_3 + 0xc)
int32_t rax_2

if (rax_1 u<= rdx)
    rax_2 = sub_142b970b0(arg1, rdx - rax_1)

int32_t arg_10
int32_t rdi

if (rax_1 u> rdx || rax_2 != 0)
    r9 = 0x53
label_142bcc3a3:
    arg_10 = r9
    rdi = 0
    
    if (r9 != 0)
        return zx.q(r9)
else
    rdi = *(rbx_3 + 8)
    arg_10 = 0

int32_t rax_3 = sub_142b96dd0(arg1, &arg_10)
int32_t rdx_3 = arg_10

if (rdx_3 == 0)
    int32_t rbx_5 = rax_3 & 0xffffff00
    uint32_t rsi_1
    
    if (rbx_5 == 0)
        int32_t* rdx_5 = &arg_10
        uint32_t rax_7
        
        if ((rax_3.b & 4) == 0)
            rax_7 = sub_142b96dd0(arg1, rdx_5)
        else
            rax_7 = sub_142b96d30(arg1, rdx_5)
        
        rsi_1 = rax_7
    else
        if (rbx_5 != 0x100)
            return 3
        
        int32_t* rdx_4 = &arg_10
        
        if ((rax_3.b & 4) == 0)
            rsi_1 = zx.d(sub_142b96f90(arg1, rdx_4))
        else
            rsi_1 = zx.d(sub_142b96f00(arg1, rdx_4))
    
    if (arg_10 != 0)
        return 3
    
    if (rbx_5 != 0)
        if (rsi_1 u> rdi u/ 5 || rsi_1 == 0)
            return 8
    else if (rsi_1 u> rdi u/ 0xc || rsi_1 == 0)
        return 8
    
    if (rsi_1 u> 0x10000)
        rsi_1 = 0x10000
    
    *(arg2 + 0x1a8) = rsi_1
    uint16_t* rax_10
    char r9_2
    rax_10, r9_2 = sub_142b99a90(r12, 0x10, 0, rsi_1, 0, &arg_10)
    rdx_3 = arg_10
    uint16_t* rbx_6 = rax_10
    *(arg2 + 0x1b0) = rax_10
    
    if (rdx_3 == 0)
        int32_t rdi_1 = 0
        
        if (rsi_1 != 0)
            while (true)
                int32_t rax_11
                rax_11, r9_2 = sub_142bcc230(arg1, rax_3, rbx_6, r9_2)
                arg_10 = rax_11
                *(rbx_6 + 0xc) = 0
                rdx_3 = arg_10
                
                if (rdx_3 == 0)
                    if (rbx_6[1] s< *rbx_6 || sx.d(rbx_6[3]) s< neg.d(sx.d(rbx_6[4])))
                        *(rbx_6 + 2) = 0
                        *rbx_6 = 0
                        rdx_3 = arg_10
                    
                    rdi_1 += 1
                    rbx_6 = &rbx_6[8]
                    
                    if (rdi_1 u< rsi_1)
                        continue
                    else if (rdx_3 == 0)
                        break
                
                sub_142b99980(r12, *(arg2 + 0x1b0))
                rdx_3 = arg_10
                *(arg2 + 0x1b0) = 0
                break

return zx.q(rdx_3)
