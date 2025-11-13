// 函数: sub_1410257d0
// 地址: 0x1410257d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
void* rbx = &arg1[0xb]
arg3.b = 1
sub_141035430(rbx, arg6, arg3.b)
sub_141035430(&arg1[0x13], arg6, 1)
int32_t rax = arg1[0xa].d

if (arg6 s> rax)
    arg1[0xa].d = arg6
    
    if (arg6 s> *(arg1 + 0x54))
        sub_1410346a0(arg1, rax)
else if (arg6 s< rax && arg6 != rax)
    arg1[0xa].d = arg6
    sub_141034980(arg1)

int32_t r12 = 0

if (arg6 != 0)
    void* r9 = &arg1[0x13]
    int64_t* r15_1 = arg5
    int64_t* rdi_1 = arg4 - r15_1
    int64_t* arg_20 = rdi_1
    
    do
        void* rcx_4 = *(rbx + 0x30)
        void* rsi_1 = rbx
        int16_t* rdi_2 = *(rdi_1 + r15_1)
        int64_t r14_2 = sx.q(r12) << 4
        
        if (rcx_4 != 0)
            rsi_1 = rcx_4
        
        void* rsi_2 = rsi_1 + r14_2
        
        if (*rsi_2 != rdi_2)
            int32_t rbx_2
            
            if (rdi_2 == 0 || *rdi_2 == 0)
                rbx_2 = 0
            else
                int64_t rbx_1 = -1
                
                do
                    rbx_1 += 1
                while (rdi_2[rbx_1] != 0)
                
                rbx_2 = rbx_1.d + 1
            
            int32_t rdx_3 = 0
            *(rsi_2 + 8) = 0
            
            if (*(rsi_2 + 0xc) != rbx_2)
                sub_1405947f0(rsi_2, rbx_2)
                rdx_3 = *(rsi_2 + 8)
            
            int32_t rax_1 = rdx_3 + rbx_2
            *(rsi_2 + 8) = rax_1
            
            if (rax_1 s> *(rsi_2 + 0xc))
                sub_140594770(rsi_2)
            
            if (rbx_2 != 0)
                memcpy(*rsi_2, rdi_2, rbx_2 * 2)
            
            r9 = &arg1[0x13]
            rbx = &arg1[0xb]
        
        void* rcx_8 = *(r9 + 0x30)
        void* rsi_3 = r9
        int16_t* rdi_3 = *r15_1
        
        if (rcx_8 != 0)
            rsi_3 = rcx_8
        
        void* rsi_4 = rsi_3 + r14_2
        
        if (*rsi_4 != rdi_3)
            int32_t rbx_4
            
            if (rdi_3 == 0 || *rdi_3 == 0)
                rbx_4 = 0
            else
                int64_t rbx_3 = -1
                
                do
                    rbx_3 += 1
                while (rdi_3[rbx_3] != 0)
                
                rbx_4 = rbx_3.d + 1
            
            int32_t rdx_6 = 0
            *(rsi_4 + 8) = 0
            
            if (*(rsi_4 + 0xc) != rbx_4)
                sub_1405947f0(rsi_4, rbx_4)
                rdx_6 = *(rsi_4 + 8)
            
            int32_t rax_2 = rbx_4 + rdx_6
            *(rsi_4 + 8) = rax_2
            
            if (rax_2 s> *(rsi_4 + 0xc))
                sub_140594770(rsi_4)
            
            if (rbx_4 != 0)
                memcpy(*rsi_4, rdi_3, rbx_4 * 2)
            
            r9 = &arg1[0x13]
            rbx = &arg1[0xb]
        
        int64_t* rax_3 = *(rbx + 0x30)
        int64_t* rcx_12 = rbx
        
        if (rax_3 != 0)
            rcx_12 = rax_3
        
        int16_t* const rdx_9
        
        if (rcx_12[sx.q(r12) * 2 + 1].d == 0)
            rdx_9 = &data_142d40450
        else
            rdx_9 = rcx_12[sx.q(r12) * 2]
        
        int64_t* rcx_13 = arg1[9]
        int64_t* rax_6 = arg1
        
        if (rcx_13 != 0)
            rax_6 = rcx_13
        
        int64_t* rcx_14 = arg1
        rax_6[sx.q(r12) * 3 + 1] = rdx_9
        void* rdx_10 = r9
        int64_t* rax_7 = arg1[9]
        
        if (rax_7 != 0)
            rcx_14 = rax_7
        
        rcx_14[sx.q(r12) * 3 + 2].d = 0
        void* rax_8 = *(r9 + 0x30)
        
        if (rax_8 != 0)
            rdx_10 = rax_8
        
        int16_t* const rdx_11
        
        if (*(rdx_10 + r14_2 + 8) == 0)
            rdx_11 = &data_142d40450
        else
            rdx_11 = *(rdx_10 + r14_2)
        
        int64_t* rax_9 = arg1[9]
        int64_t* rcx_15 = arg1
        rdi_1 = arg_20
        
        if (rax_9 != 0)
            rcx_15 = rax_9
        
        r12 += 1
        r15_1 = &r15_1[1]
        rcx_15[sx.q(r12) * 3] = rdx_11
    while (r12 u< arg6)

int64_t* result_1 = arg1
arg1[0x1b] = arg2
arg1[0x1c] = zx.q(arg_18)
arg1[0x1d].d = arg1[0xa].d
int64_t* result = arg1[9]

if (result != 0)
    result_1 = result

arg1[0x1e] = result_1
return result
