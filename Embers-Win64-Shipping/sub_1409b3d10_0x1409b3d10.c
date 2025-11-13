// 函数: sub_1409b3d10
// 地址: 0x1409b3d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[1].d = 0
void*** rdi = arg1

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg3, 0)

void* result = rdi[5]
int64_t r8 = sx.q(arg2) * 0x28
int32_t r13 = 0
int64_t arg_20 = r8
int32_t r10 = *(r8 + *(result + 0xe0) + 8)
int32_t arg_10 = r10

if (r10 s> 0)
    int64_t r12_1 = 0
    TEB* gsbase
    void* r11_1 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
    void* arg_18 = r11_1
    
    do
        void* r9_1 = rdi[5]
        int64_t* r8_1 = r8 + *(r9_1 + 0xe0)
        int32_t* rcx_4
        
        if (r13 s< 0 || r13 s>= r8_1[1].d)
            rcx_4 = &data_143a1c6b8
        else
            rcx_4 = *r8_1 + r12_1
        
        int64_t rax_1 = sx.q(*rcx_4)
        int32_t r14_1
        
        if (rax_1.d == data_143a1c6b8)
            r14_1 = data_143a1c6b4
        else
            r14_1 = *(*(r9_1 + 0x38) + rax_1 * 0x18)
        
        r13 += 1
        int32_t temp1_1 = mods.dp.d(sx.q(r13), r10)
        int32_t* rdx_4
        
        if (temp1_1 s< 0 || temp1_1 s>= r8_1[1].d)
            rdx_4 = &data_143a1c6b8
        else
            rdx_4 = *r8_1 + (sx.q(temp1_1) << 2)
        
        result = sx.q(*rdx_4)
        int32_t rbp_1
        
        if (result.d == data_143a1c6b8)
            rbp_1 = data_143a1c6b4
        else
            result *= 3
            rbp_1 = *(*(r9_1 + 0x38) + (result << 3))
        
        rdi.b = 0
        int32_t rdx_6 = 0
        void* r10_3 = (sx.q(r14_1) << 5) + *r9_1
        int32_t rbx_1 = *(r10_3 + 0x18)
        
        if (rbx_1 s> 0)
            int64_t r11_2 = *(r9_1 + 0x70)
            
            do
                int32_t* r8_2
                
                if (rdx_6 s< 0 || rdx_6 s>= rbx_1)
                    r8_2 = &data_143a1c6bc
                else
                    r8_2 = *(r10_3 + 0x10) + (sx.q(rdx_6) << 2)
                
                int64_t rcx_7 = sx.q(*r8_2) * 3
                result = zx.q(*(r11_2 + (rcx_7 << 3)))
                
                if (result.d == r14_1)
                    result = zx.q(*(r11_2 + (rcx_7 << 3) + 4))
                
                if (result.d == rbp_1)
                    rdi.b = 1
                    break
                
                rdx_6 += 1
            while (rdx_6 s< rbx_1)
            
            r11_1 = arg_18
        
        if (rdi.b != 0)
            rdi = arg1
        else
            int32_t rax_9 = data_143a1c6bc
            int64_t var_60 = 0
            int32_t* rsi_1 = 0x14 + *r11_1
            int64_t var_58_1 = 0
            int32_t var_68_1 = r14_1
            int32_t var_64_1 = rbp_1
            
            if (data_143cee230 s> *rsi_1)
                _Init_thread_header(&data_143cee230)
                
                if (data_143cee230 == 0xffffffff)
                    atexit(sub_142cb8510)
                    _Init_thread_footer(&data_143cee230)
            
            int32_t i_2 = data_143cee228
            int32_t rbx_6
            
            if (data_143cee22c s< 0)
                if (i_2 != 0)
                    int64_t* rbx_5 = data_143cee220 + 8
                    int32_t i
                    
                    do
                        int64_t rcx_9 = *rbx_5
                        
                        if (rcx_9 != 0)
                            sub_140a74f90(rcx_9)
                        
                        rbx_5 = &rbx_5[4]
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                
                rbx_6 = 0
                bool cond:3_1 = data_143cee22c == 0
                data_143cee228 = 0
                
                if (not(cond:3_1))
                    sub_1405a51b0(&data_143cee220, 0)
                    rbx_6 = data_143cee228
            else
                if (i_2 != 0)
                    int64_t* rbx_3 = data_143cee220 + 8
                    int32_t i_1
                    
                    do
                        int64_t rcx_8 = *rbx_3
                        
                        if (rcx_8 != 0)
                            sub_140a74f90(rcx_8)
                        
                        rbx_3 = &rbx_3[4]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                
                rbx_6 = 0
            
            bool cond:4_1 = rbx_6 + 1 s<= data_143cee22c
            data_143cee228 = rbx_6 + 1
            
            if (not(cond:4_1))
                sub_1405c4e40(&data_143cee220)
            
            int32_t* rbx_9 = (sx.q(rbx_6) << 5) + data_143cee220
            *rbx_9 = r14_1
            rbx_9[1] = rbp_1
            sub_1409aa000(&rbx_9[2], &var_60)
            rbx_9[6] = rax_9
            
            if (data_143cee248 s> *rsi_1)
                _Init_thread_header(&data_143cee248)
                
                if (data_143cee248 == 0xffffffff)
                    atexit(&data_142cb8a00)
                    _Init_thread_footer(&data_143cee248)
            
            int32_t rax_14 = data_143cee244
            data_143cee240 = 0
            
            if (rax_14 s< 0 && rax_14 != 0)
                sub_1405dadb0(&data_143cee238, 0)
            
            rdi = arg1
            result = sub_1409b37f0(rdi, &data_143cee220, &data_143cee238)
            int64_t rbx_10 = sx.q(data_143cee240)
            
            if (rbx_10.d != 0)
                int32_t rax_15 = arg3[1].d
                int32_t rdx_9 = rax_15 + rbx_10.d
                
                if (rdx_9 s> *(arg3 + 0xc))
                    sub_1405dadb0(arg3, rdx_9)
                    rax_15 = arg3[1].d
                
                result = memcpy(*arg3 + (sx.q(rax_15) << 2), data_143cee238, (rbx_10 << 2).d)
                arg3[1].d += rbx_10.d
            
            int64_t rcx_15 = var_60
            
            if (rcx_15 != 0)
                result = sub_140a74f90(rcx_15)
        
        r10 = arg_10
        r8 = arg_20
        r12_1 += 4
        r11_1 = arg_18
    while (r13 s< r10)

return result
