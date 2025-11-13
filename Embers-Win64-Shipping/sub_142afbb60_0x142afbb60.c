// 函数: sub_142afbb60
// 地址: 0x142afbb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 8)
int16_t* r9 = *(arg1 + 0x20)
void* rsi = arg1
char* r8 = *(arg1 + 0x10)
void* rdi_1 = *(arg1 + 0x28) - r9
int64_t r12 = *(arg1 + 0x18)
void* arg_10 = r8
int16_t* arg_18 = r9
int32_t* result_1 = *(arg1 + 0x30)
void* rax_1 = *(r10 + 0x30)
int32_t rdi_2 = (rdi_1 s>> 1).d
void* var_50 = r10
int64_t r15

if ((*(r10 + 0x38) & 0x10) == 0)
    r15 = *(rax_1 + 0x38)
else
    r15 = *(rax_1 + 0x40)

char* var_58 = r8
int32_t rax_3 = r12.d - r8.d
int32_t rbx = 0
char* r14 = r8

if (rax_3 s< rdi_2)
    rdi_2 = rax_3

while (true)
    if (rdi_2 s>= 0x10)
        int32_t i = rdi_2 s>> 4
        int32_t i_5 = i
        
        do
            int64_t j_3 = 7
            int32_t rcx = *(r15 + (zx.q(*r8) << 2))
            int32_t r10_1 = rcx
            int64_t j
            
            do
                arg_10 = &r8[1]
                *r9 = rcx.w
                void* rdx = arg_10
                int16_t* r8_3 = &arg_18[1]
                arg_18 = r8_3
                int32_t rcx_1 = *(r15 + (zx.q(*rdx) << 2))
                arg_10 = rdx + 1
                *r8_3 = rcx_1.w
                r8 = arg_10
                r9 = &arg_18[1]
                arg_18 = r9
                rcx = *(r15 + (zx.q(*r8) << 2))
                r10_1 = r10_1 | rcx_1 | rcx
                j = j_3
                j_3 -= 1
            while (j != 1)
            arg_10 = &r8[1]
            *r9 = rcx.w
            void* rcx_2 = arg_10
            void* rdx_3 = &arg_18[1]
            arg_18 = rdx_3
            int32_t r8_5 = *(r15 + (zx.q(*rcx_2) << 2))
            arg_10 = rcx_2 + 1
            *rdx_3 = r8_5.w
            r9 = &arg_18[1]
            arg_18 = r9
            r8 = arg_10
            
            if ((r8_5 | r10_1) s>= 0x80100000)
                r8 -= 0x10
                r9 -= 0x20
                arg_10 = r8
                arg_18 = r9
                break
            
            i -= 1
        while (i s> 0)
        
        int32_t* result_2 = result_1
        int32_t i_1 = i_5 - i
        int32_t rax_9 = i_1 << 4
        rdi_2 -= rax_9
        
        if (result_2 != 0)
            var_58 = &var_58[sx.q(rax_9)]
            
            if (i_1 s> 0)
                do
                    int64_t j_2 = 0x10
                    int64_t j_1
                    
                    do
                        *result_2 = rbx
                        rbx += 1
                        result_2 = &result_1[1]
                        result_1 = result_2
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                    i_1 -= 1
                while (i_1 s> 0)
                
                r8 = arg_10
                r9 = arg_18
        
        rsi = arg1
        r14 = var_58
        r10 = var_50
    
    while (true)
        void* result
        
        if (rdi_2 s> 0 && r8 u< r12)
            uint64_t rax_11 = zx.q(*r8)
            r8 = &r8[1]
            int32_t rcx_5 = *(r15 + (rax_11 << 2))
            arg_10 = r8
            uint8_t rax_13
            
            if (rcx_5 s>= 0x80100000)
                rax_13 = (rcx_5 u>> 0x14).b & 0xf
            
            if (rcx_5 s< 0x80100000 || rax_13 == 2)
                *r9 = rcx_5.w
                r8 = arg_10
                r9 = &arg_18[1]
                arg_18 = r9
                rdi_2 -= 1
                continue
            
            if (rax_13 != 6)
                if (rax_13 != 7)
                    continue
                else
                    *arg2 = 0xc
            
            result = result_1
            
            if (result != 0)
                int32_t i_2 = r8.d - r14.d - 1
                
                if (i_2 s> 0)
                    do
                        *result = rbx
                        i_2 -= 1
                        rbx += 1
                        result = &result_1[1]
                        result_1 = result
                    while (i_2 s> 0)
                    
                    r8 = arg_10
                    r9 = arg_18
            
            if (*arg2 s<= 0)
                r14 = r8
                *(r10 + 0x41) = r8[-1]
                var_58 = r8
                void* rdx_4 = *(*(r10 + 0x30) + 0x120)
                void* rax_16
                
                if (rdx_4 != 0)
                    rax_16 = sub_142b6ca00(r10, rdx_4, 1, &arg_10, r12.d, &arg_18, *(rsi + 0x28), 
                        &result_1, rbx, *(rsi + 2), arg2)
                    r10 = var_50
                
                if (rdx_4 == 0 || rax_16.b == 0)
                    *arg2 = 0xa
                    rax_16.b = 1
                else
                    rax_16.b = 0
                
                *(r10 + 0x40) = rax_16.b
                r8 = arg_10
                r9 = arg_18
                rbx = rbx + 1 + r8.d - r14.d
                
                if (*arg2 s<= 0)
                    int32_t rax_20 = r12.d - r8.d
                    rdi_2 = ((*(rsi + 0x28) - r9) s>> 1).d
                    
                    if (rax_20 s>= rdi_2)
                        break
                    
                    rdi_2 = rax_20
                    break
                
                result = result_1
        else if (*arg2 s> 0)
            result = result_1
        else
            if (r8 u< r12 && r9 u>= *(rsi + 0x28))
                *arg2 = 0xf
            
            result = result_1
        
        if (result != 0)
            void* i_4 = r8 - r14
            
            if (r8 != r14)
                void* i_3
                
                do
                    *result = rbx
                    rbx += 1
                    result = &result_1[1]
                    result_1 = result
                    i_3 = i_4
                    i_4 -= 1
                while (i_3 != 1)
                r8 = arg_10
                r9 = arg_18
        
        *(rsi + 0x10) = r8
        *(rsi + 0x20) = r9
        *(rsi + 0x30) = result
        return result
