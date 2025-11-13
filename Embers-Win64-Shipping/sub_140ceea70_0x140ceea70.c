// 函数: sub_140ceea70
// 地址: 0x140ceea70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = arg2[2]
char rax = not.b(*(arg1 + 0x30))
char* rbx = *(arg1 + 0x10)
int64_t arg_8 = rdx
void** rcx = rbx
void* rdi = *arg2
int64_t r10 = arg2[1]
int64_t arg_18 = rdx
uint64_t rax_1
int64_t (* var_38)(int64_t* arg1, int64_t* arg2, int64_t* arg3)
int64_t* var_30
int64_t (* var_28)(int64_t* arg1, int64_t* arg2)

if ((rax & 1) != 0)
    var_28 = sub_140cf2f50
    int64_t* var_20_1 = &arg_8
    var_38 = sub_140cf2f40
    var_30 = &arg_18
    rax_1 = sub_140cfef50(rcx, r10, rdi + 0x18, &var_38, &var_28)
    
    if (rax_1.d != 0xffffffff)
        rax_1 = sx.q(*(rdi + 0x18)) + sx.q(*(rdi + 0x2c) * rax_1.d)
        
        if (*rbx != neg.q(rax_1))
        label_140ceeb8a:
            int64_t (* rcx_4)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = *arg2
            var_38 = rcx_4
            var_30:4.d = 1
            var_30.d = (divs.dp.q(sx.o(rax_1), sx.q(*(rcx_4 + 0x24)))).d
            sub_140ceed90(rcx_4, &var_38)
            int64_t* rax_8
            rax_8.b = 1
            return rax_8
else
    var_38 = sub_140cf2f50
    var_30 = &arg_8
    var_28 = sub_140cf2f40
    int64_t* var_20 = &arg_18
    rax_1 = sub_140cfee90(rcx, r10, rdi + 0x18, &var_28, &var_38)
    
    if (rax_1.d != 0xffffffff)
        void* rdx_2 = *rbx
        void* r8_1 = rdx_2
        char r9_1 = *rbx & 1
        
        if (r9_1 != 0)
            r8_1 = &rbx[r8_1 s>> 1]
        
        int64_t r10_1 = sx.q(*(rdi + 0x18))
        rax_1 = sx.q(*(rdi + 0x2c) * rax_1.d) + r8_1
        
        if (r10_1 != neg.q(rax_1))
            if (r9_1 != 0)
                rdx_2 = &rbx[rdx_2 s>> 1]
            
            rax_1 = r10_1 + rax_1 - rdx_2
            goto label_140ceeb8a
rax_1.b = 0
return rax_1
