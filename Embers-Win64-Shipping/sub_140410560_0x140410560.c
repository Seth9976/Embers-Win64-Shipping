// 函数: sub_140410560
// 地址: 0x140410560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58
int64_t rax_1 = __security_cookie ^ &var_58
var_58 = arg4
int64_t var_50 = arg3
int16_t* r14 = arg2
int32_t var_7e8
int32_t* rbx = &var_7e8
int32_t* var_40 = &var_7e8
void* rcx = &arg1[4]
var_7e8 = *arg1
void* var_48 = rcx
int32_t var_7e4 = *(rcx - 0xc)
int32_t var_7e0 = *(rcx - 8)
int32_t rax_5 = *(rcx - 4)
int32_t r13_1

while (true)
    r13_1 = 0x1e0
    rbx[3] = rax_5
    
    if (arg4 s< 0x1e0)
        r13_1 = arg4
    
    sub_1403e7700(rcx, &rbx[4], arg3, &data_1436fcb28, r13_1)
    
    if (r13_1 s> 2)
        void* r15_1 = &rbx[3]
        uint64_t i_1 = zx.q((r13_1 - 3) u/ 3 + 1)
        uint64_t i
        
        do
            int32_t r9 = *(r15_1 - 4)
            int32_t rdx_3 = *(r15_1 - 0xc)
            int32_t rbx_1 = *(r15_1 - 8)
            int32_t rdi_1 = *r15_1
            int32_t rsi_7 = ((zx.d(rdx_3.w) * 0x1259) s>> 0x10) + ((zx.d(r9.w) * 0x2054) s>> 0x10)
                + ((zx.d(rbx_1.w) * 0x29f3) s>> 0x10) + ((zx.d(rdi_1.w) * 0x61f) s>> 0x10)
                + (rdx_3 s>> 0x10) * 0x1259
            int32_t rsi_13 = (((rsi_7 + (r9 s>> 0x10) * 0x2054 + (rbx_1 s>> 0x10) * 0x29f3
                + (rdi_1 s>> 0x10) * 0x61f) s>> 5) + 1) s>> 1
            
            if (rsi_13 s> 0x7fff)
                rsi_13 = 0x7fff
            else if (rsi_13 s< 0xffff8000)
                rsi_13 = -0x8000
            
            *r14 = rsi_13.w
            int32_t r9_3 = *(r15_1 + 4)
            int32_t r10_1 = *(r15_1 - 8)
            int32_t rbx_4 = *(r15_1 - 4)
            int32_t rsi_14 = *r15_1
            int32_t rax_23 = ((zx.d(r9_3.w) * 0x1259) s>> 0x10) + ((zx.d(r10_1.w) * 0x61f) s>> 0x10)
                + ((zx.d(rbx_4.w) * 0x2054) s>> 0x10) + ((zx.d(rsi_14.w) * 0x29f3) s>> 0x10)
                + (r9_3 s>> 0x10) * 0x1259
            int32_t rax_29 = (((rax_23 + (r10_1 s>> 0x10) * 0x61f + (rbx_4 s>> 0x10) * 0x2054
                + (rsi_14 s>> 0x10) * 0x29f3) s>> 5) + 1) s>> 1
            
            if (rax_29 s> 0x7fff)
                rax_29 = 0x7fff
            else if (rax_29 s< 0xffff8000)
                rax_29 = -0x8000
            
            r14[1] = rax_29.w
            r14 = &r14[2]
            r15_1 += 0xc
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx = var_40
    
    int64_t rcx_11 = sx.q(r13_1)
    arg4 = var_58 - r13_1
    arg3 = var_50 + (rcx_11 << 1)
    var_50 = arg3
    var_58 = arg4
    
    if (arg4 s<= 0)
        break
    
    *rbx = rbx[rcx_11]
    rbx[1] = rbx[rcx_11 + 1]
    rbx[2] = rbx[rcx_11 + 2]
    rax_5 = rbx[rcx_11 + 3]
    rcx = var_48

int64_t rax_33 = sx.q(r13_1)
void* rcx_12 = &rbx[rax_33]
*arg1 = rbx[rax_33]
arg1[1] = *(rcx_12 + 4)
arg1[2] = *(rcx_12 + 8)
int32_t result = *(rcx_12 + 0xc)
arg1[3] = result
__security_check_cookie(rax_1 ^ &var_58)
return result
