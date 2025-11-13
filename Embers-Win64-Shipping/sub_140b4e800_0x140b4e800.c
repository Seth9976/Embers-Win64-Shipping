// 函数: sub_140b4e800
// 地址: 0x140b4e800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbp = arg3
void* rdx = *(arg1 + 8)
int64_t r8 = -1

do
    r8 += 1
while (*(rdx + (r8 << 1)) != 0)

sub_140b4ae70(rbp, rdx, r8.d)
void* i = *(arg1 + 0x10)

if (i == 0)
    sub_140b4ad80(rbp, arg1 + 0x5c, zx.q((i + 4).d))
    return zx.q(*(arg1 + 0x5c))

void* var_48
void var_40
sub_140b4c620(&var_40, sub_140b58260(&var_48, u"FShader", 1))
void* rdx_3 = nullptr
uint32_t r13 = 0
int32_t r12 = 0
var_48 = nullptr
int32_t r14 = 0
int32_t arg_20 = 0

if (*(arg1 + 0x64) != 0 && *(arg1 + 0x66) == 0)
    uint32_t rax_3
    rax_3.b = not.b((arg2[1] u>> 1).b)
    arg_20 = (((zx.q(rax_3) & 1) << 2) + 4).d

do
    char rcx_4 = *(i + 0x28)
    
    if (((rcx_4 & 1) == 0 || ((arg2[1] u>> 4).b & 1) != 0)
            && ((rcx_4 & 2) == 0 || ((arg2[1] u>> 5).b & 1) != 0))
        char rax_10 = *(i + 0x29)
        void* rdi_1 = *(i + 8)
        
        if (rax_10 != 0)
            if (rdx_3 == rdi_1)
                r13 += zx.d(rax_10)
            
            if (rdx_3 != rdi_1 || r13 u> *(rdi_1 + 0x58) << 3)
                int32_t rax_17 = (*(rdi_1 + 0x38))(rdi_1, arg2)
                int32_t rdx_14 = *arg2
                
                if (rax_17 u<= rdx_14)
                    rdx_14 = rax_17
                
                arg_20 = (arg_20 - 1 + rdx_14) & neg.d(rdx_14)
                sub_140b4ad80(rbp, &arg_20, 4)
                int32_t rax_18 = (*(rdi_1 + 0x30))(rdi_1, arg2, rbp)
                r13 = zx.d(*(i + 0x29))
                arg_20 += rax_18
                var_48 = rdi_1
            
            sub_140b4ad80(rbp, i + 0x29, 1)
        else
            var_48 = nullptr
            r13 = 0
            uint32_t r15_1 = zx.d(*(arg1 + 0x65))
            int32_t rax_12 = (*(rdi_1 + 0x38))(rdi_1, arg2)
            int32_t r8_2 = *arg2
            
            if (rax_12 u<= r8_2)
                r8_2 = rax_12
            
            arg_20 = (arg_20 - 1 + r8_2) & neg.d(r8_2)
            sub_140b4ad80(arg3, &arg_20, 4)
            sub_140b4ad80(arg3, i + 0x24, 4)
            int32_t rax_13 = (*(rdi_1 + 0x30))(rdi_1, arg2, arg3)
            
            if (rax_13 != 0)
                goto label_140b4e9be
            
            if (r12 u>= r15_1)
                rax_13 = 1
            label_140b4e9be:
                
                if (r12 u>= r15_1 || ((arg2[1] u>> 3).b & 1) != 0)
                    arg_20 += ((rax_12 - 1 + rax_13) & neg.d(rax_12)) * *(i + 0x24)
                    rbp = arg3
                else
                    arg_20 += rax_13
                    rbp = arg3
            else
                if (r14 != 0)
                    rax_13 = 1
                
                if (r14 == 0)
                    r14 += 1
                
                if (rax_13 != 0)
                    goto label_140b4e9be
                
                rbp = arg3
        
        rdx_3 = var_48
        r12 += 1
    
    i = *(i + 0x10)
while (i != 0)

return zx.q(arg_20)
