// 函数: sub_1429bb720
// 地址: 0x1429bb720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
int64_t* r15 = arg1
void* rax = j_sub_140a82f30(0x40004)
void* arg_10 = rax
memset(rax, 0, 0x40004)
void** rax_1 = j_sub_140a82f30(0x80008)
void** arg_18 = rax_1
memset(rax_1, 0, 0x80008)
int32_t r10 = 0
*arg2 = 0
int32_t i = 0

if (*r15 == 0)
    int64_t rax_2
    
    do
        rax_2 = sx.q(*arg2)
        i = (rax_2 + 1).d
        *arg2 = i
    while (r15[rax_2 + 1] == 0)

if (i s< 0x10001)
    int64_t i_3 = sx.q(i)
    void** r9_1 = rax_1
    void* rdx = &r15[i_3]
    int32_t* r8 = rax + (i_3 << 2)
    void* rax_3 = rdx
    
    do
        *r8 = i
        
        if (*rdx != 0)
            *r9_1 = rax_3
            r10 += 1
            r9_1 = &r9_1[1]
            *arg3 = i
        
        i += 1
        rax_3 += 8
        r8 = &r8[1]
        rdx += 8
    while (i s< 0x10001)

int64_t rcx_2 = sx.q(*arg3)
*arg3 = (rcx_2 + 1).d
r15[rcx_2 + 1] = 1
rax_1[sx.q(r10)] = &r15[sx.q(*arg3)]
int64_t i_2 = sx.q(r10 + 1)
int64_t i_1 = i_2 s>> 1

if (i_1 s> 0)
    int64_t rdi_2 = (i_2 - 1) s>> 1
    
    do
        i_1 -= 1
        int64_t* r11_1 = rax_1[i_1]
        int64_t i_5 = i_1
        int64_t i_4 = i_1
        
        if (i_1 s< rdi_2)
            do
                int64_t r8_1 = i_4 * 2
                int64_t rcx_4 = *rax_1[r8_1 + 2]
                i_4 = sbb.q(rcx_4, rcx_4, *rax_1[r8_1 + 1] u< rcx_4) + 2 + r8_1
                rax_1[i_5] = rax_1[i_4]
                i_5 = i_4
            while (i_4 s< rdi_2)
        
        if (i_4 == rdi_2 && (i_2.b & 1) == 0)
            rax_1[i_5] = rax_1[i_2 - 1]
            i_5 = i_2 - 1
        
        int64_t i_6 = (i_5 - 1) s>> 1
        
        while (i_1 s< i_5)
            int64_t* rdx_3 = rax_1[i_6]
            
            if (*rdx_3 u<= *r11_1)
                break
            
            rax_1[i_5] = rdx_3
            i_5 = i_6
            i_6 = (i_6 - 1) s>> 1
        
        rax_1[i_5] = r11_1
    while (i_1 s> 0)

int64_t* rax_11 = j_sub_140a82f30(0x80008)
memset(rax_11, 0, 0x80008)

if (i_2 s> 1)
    void* rdx_4 = &rax_1[i_2]
    
    do
        void* rcx_10 = *rax_1
        int32_t r12_3 = ((rcx_10 - r15) s>> 3).d
        
        if (((rdx_4 - rax_1) & 0xfffffffffffffff8) s>= 0x10)
            arg_10 = *(rdx_4 - 8)
            *(rdx_4 - 8) = rcx_10
            char var_58_1 = arg1.b
            sub_1429bb4b0(rax_1, 0, (rdx_4 - 8 - rax_1) s>> 3, &arg_10)
            rcx_10 = *rax_1
        
        i_2 -= 1
        int64_t j_5 = (rcx_10 - arg1) s>> 3
        rdx_4 = &rax_1[i_2]
        
        if (i_2 s>= 2)
            arg_10 = *(rdx_4 - 8)
            *(rdx_4 - 8) = rcx_10
            char var_58_2 = arg1.b
            sub_1429bb4b0(rax_1, 0, (rdx_4 - 8 - rax_1) s>> 3, &arg_10)
            rdx_4 = &rax_1[i_2]
        
        int64_t r10_3 = sx.q(j_5.d)
        int64_t r11_2 = sx.q(r12_3)
        arg1[r10_3] += arg1[r11_2]
        
        if (i_2 s>= 2)
            int64_t* r9_4 = *(rdx_4 - 8)
            int64_t j = i_2 - 1
            int64_t j_3 = (j - 1) s>> 1
            
            if (j s> 0)
                do
                    int64_t* rdx_5 = rax_1[j_3]
                    
                    if (*rdx_5 u<= *r9_4)
                        break
                    
                    rax_1[j] = rdx_5
                    j = j_3
                    j_3 = (j_3 - 1) s>> 1
                while (j s> 0)
                
                rdx_4 = &rax_1[i_2]
            
            rax_1[j] = r9_4
        
        rax_11[r10_3] += 1
        
        for (int32_t j_1 = *(rax + (r10_3 << 2)); j_1 != j_5.d; j_1 = *(rax + (j_5 << 2)))
            j_5 = sx.q(j_1)
            rax_11[j_5] += 1
        
        *(rax + (sx.q(j_5.d) << 2)) = r12_3
        rax_11[r11_2] += 1
        int32_t j_2 = *(rax + (r11_2 << 2))
        
        if (j_2 != r12_3)
            int64_t j_4
            
            do
                j_4 = sx.q(j_2)
                rax_11[j_4] += 1
                j_2 = *(rax + (j_4 << 2))
            while (j_2 != j_4.d)
        
        r15 = arg1
    while (i_2 s> 1)

sub_1429bbad0(rax_11)
memcpy(r15, rax_11, 0x80008)
j_sub_140a74f90(rax_11)
j_sub_140a74f90(rax_1)
return j_sub_140a74f90(rax) __tailcall
