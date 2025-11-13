// 函数: sub_142a27e30
// 地址: 0x142a27e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t rax_2 = sx.q(arg13)
int32_t r13 = arg9
void* r9 = arg1
int64_t r15 = sx.q(arg3)
int32_t r8 = arg8
int64_t var_b8
int64_t* var_e0 = &var_b8
int32_t count = 4 << arg7
int64_t rdx_2 = rax_2 << 7
int32_t* rax_3 = *(r9 + 0x1f8)
int32_t var_100 = r8
int32_t var_108 = r13
int32_t rbx
int32_t r10

if (rax_2.d != 0)
    rbx = rax_3[5]
    r10 = rax_3[6]
else
    rbx = *rax_3
    r10 = rax_3[1]

int32_t r12_3 = (neg.d(*(r9 + 0x1d0)) s>> ((*(rdx_2 + r9 + 8)).b + 3)) + arg11
int32_t rdi_3 = (neg.d(*(r9 + 0x1d8)) s>> ((*(rdx_2 + r9 + 0xc)).b + 3)) + arg12
uint64_t rcx_5 = zx.q(arg6)
char var_78[0x20]

if ((*(rcx_5 + 0x143603ab8) & 2) != 0)
    int64_t count_3 = sx.q(count)
    
    if (r13 == 0)
        memset(&var_78, 0x81, count_3)
        r9 = arg1
        r8 = var_100
    else if (*(r9 + 0x1dc) s>= 0)
        int64_t rdi_8 = 0
        
        if (count s> 0)
            int32_t rdx_6 = -1
            
            do
                int64_t rax_14 = sx.q(rdx_6)
                rdx_6 += r15.d
                var_78[rdi_8] = *(rax_14 + arg2)
                rdi_8 += 1
            while (rdi_8 s< count_3)
        
        r8 = var_100
    else if (rdi_3 + count s> r10)
        int32_t r10_1 = r10 - rdi_3
        int32_t rdi_5 = 0
        int64_t r9_1 = sx.q(r10_1)
        int64_t r8_1 = 0
        
        if (r10_1 s> 0)
            int32_t rdx_4 = -1
            rdi_5 = r9_1.d
            
            do
                int64_t rax_6 = sx.q(rdx_4)
                rdx_4 += r15.d
                var_78[r8_1] = *(rax_6 + arg2)
                r8_1 += 1
            while (r8_1 s< r9_1)
        
        r9 = arg1
        r8 = var_100
        int64_t rcx_9
        int64_t rdi_7
        
        if (rdi_5 s< count)
            rdi_7, rcx_9 = __memfill_u8(&var_78[sx.q(rdi_5)], 
                *(sx.q((r10_1 - 1) * r15.d - 1) + arg2), sx.q(count - rdi_5))
    else
        int64_t rdi_4 = 0
        
        if (count s> 0)
            int32_t rdx_3 = -1
            
            do
                int64_t rax_5 = sx.q(rdx_3)
                rdx_3 += r15.d
                var_78[rdi_4] = *(rax_5 + arg2)
                rdi_4 += 1
            while (rdi_4 s< count_3)
        
        r8 = var_100

int32_t rdi_9 = arg10

if ((*(rcx_5 + 0x143603ab8) & 4) != 0)
    if (r8 == 0)
        memset(&var_b8, 0x7f, sx.q(count))
        char var_b9_3 = 0x7f
    else
        int64_t* r13_2 = arg2 - r15
        int32_t rbx_1
        
        if (*(r9 + 0x1d4) s>= 0)
            rbx_1 = var_108
            
            if (count != 4 || rdi_9 == 0 || rbx_1 == 0)
                memcpy(&var_b8, r13_2, count)
            else
                var_e0 = r13_2
        else
            if (r12_3 + count s<= rbx)
                memcpy(&var_b8, r13_2, count)
            else if (r12_3 s<= rbx)
                int32_t rdi_11 = rbx - r12_3
                int64_t rbx_2 = sx.q(rdi_11)
                memcpy(&var_b8, r13_2, rbx_2.d)
                memset(&var_b8 + rbx_2, zx.d(*(&var_b8 + sx.q(rdi_11 - 1))), 
                    sx.q(r12_3 - rbx + count))
                rdi_9 = arg10
            
            rbx_1 = var_108
        
        if (rbx_1 == 0)
            r13 = var_108
            char var_b9_2 = 0x81
        else
            r13 = var_108
            char var_b9_1 = *(r13_2 - 1)

uint64_t rbx_5 = rcx_5

if ((*(rbx_5 + 0x143603ab8) & 8) != 0)
    if (var_100 == 0)
        memset(&var_b8, 0x7f, sx.q(count * 2))
        char var_b9_6 = 0x7f
    else
        int64_t* r14_1 = arg2 - r15
        
        if (*(arg1 + 0x1d4) s< 0)
            int32_t r15_1 = count * 2
            
            if (r15_1 + r12_3 s> rbx)
                if (r12_3 + count s<= rbx)
                    int32_t rbx_4 = rbx - r12_3
                    void* rcx_23
                    int32_t c
                    uint64_t count_4
                    
                    if (rdi_9 == 0 || count != 4)
                        int64_t count_5 = sx.q(count)
                        memcpy(&var_b8, r14_1, count_5.d)
                        count_4 = count_5
                        c = zx.d(*(&var_b8 + sx.q(count - 1)))
                        rcx_23 = &var_b8 + count_5
                    else
                        int64_t rdi_12 = sx.q(rbx_4)
                        memcpy(&var_b8, r14_1, rdi_12.d)
                        count_4 = sx.q(r12_3 - rbx + 8)
                        c = zx.d(*(&var_b8 + sx.q(rbx_4 - 1)))
                        rcx_23 = &var_b8 + rdi_12
                    
                    memset(rcx_23, c, count_4)
                    rbx_5 = rcx_5
                else if (r12_3 s<= rbx)
                    int32_t rdi_14 = rbx - r12_3
                    int64_t rbx_6 = sx.q(rdi_14)
                    memcpy(&var_b8, r14_1, rbx_6.d)
                    memset(&var_b8 + rbx_6, zx.d(*(&var_b8 + sx.q(rdi_14 - 1))), 
                        sx.q(r15_1 - rbx + r12_3))
                    rbx_5 = rcx_5
            else if (rdi_9 == 0 || count != 4)
                int64_t count_1 = sx.q(count)
                memcpy(&var_b8, r14_1, count_1.d)
                memset(&var_b8 + count_1, zx.d(*(&var_b8 + sx.q(count - 1))), count_1)
            else
                var_b8 = *r14_1
            
            r13 = var_108
        else if (count != 4 || rdi_9 == 0 || r13 == 0)
            int64_t count_2 = sx.q(count)
            memcpy(&var_b8, r14_1, count_2.d)
            
            if (count != 4 || arg10 == 0)
                memset(&var_b8 + count_2, zx.d(*(&var_b8 + sx.q(count - 1))), count_2)
            else
                int32_t var_b4_1 = *(r14_1 + 4)
        else
            var_e0 = r14_1
        
        if (r13 == 0)
            char var_b9_5 = 0x81
        else
            char var_b9_4 = *(r14_1 - 1)

char (* r9_2)[0x20] = &var_78
int64_t result

if (arg6 != 0)
    result = (*(((zx.q(arg7) + (rbx_5 << 2)) << 3) + 0x143fed360))(arg4, sx.q(arg5), var_e0, r9_2, 
        var_108, var_100, rbx, rcx_5, arg1, var_e0, arg4)
else
    result = (&data_143fed4a0)[zx.q(arg7) + ((sx.q(var_100) + (sx.q(r13) << 1)) << 2)](arg4, 
        sx.q(arg5), var_e0, r9_2, var_108, var_100, rbx, rcx_5, arg1, var_e0, arg4)

__security_check_cookie(rax_1 ^ &var_128)
return result
