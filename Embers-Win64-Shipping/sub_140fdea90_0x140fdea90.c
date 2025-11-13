// 函数: sub_140fdea90
// 地址: 0x140fdea90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x17cc8)
int64_t* result

if (rax != 0)
    result = zx.q(rax - 1)
else
    result = 0x270f

void* rsi = *(arg1 + (result << 3) + 0x4448)
int64_t arg_8

if (*(rsi + 0xa8) != 0)
    result = *(arg1 + 0x43d8)
    void* rdi_1 = *result
    
    if (rdi_1 != 0)
        result = sub_140fde8a0(rdi_1, *(arg1 + 0x43d4))
        
        if (result.b != 0)
            result = *(rdi_1 + 0x40)
            int64_t rdx_2 = result[zx.q(*(rdi_1 + 0x48))]
            arg_8 = rdx_2
            
            if (*(arg1 + 0x20c0) != rdx_2 || *(arg1 + 0x20c8) != 0 || *(arg1 + 0x20cc) != 0x1000)
                *(arg1 + 0x20c0) = rdx_2
                *(arg1 + 0x20c8) = 0
                *(arg1 + 0x20cc) = 0x1000
                int64_t* rcx_2 = *(arg1 + 0x188)
                result = (*(*rcx_2 + 0x38))(rcx_2, 0, 1, &arg_8)

if (*(arg1 + 0x43d5) != 0)
    if (*(rsi + 0xa9) != 0)
        result = *(arg1 + 0x43e8)
        void* rdi_2 = *result
        
        if (rdi_2 != 0)
            result = sub_140fde8a0(rdi_2, *(arg1 + 0x43d4))
            
            if (result.b != 0)
                result = *(rdi_2 + 0x40)
                int64_t rdx_4 = result[zx.q(*(rdi_2 + 0x48))]
                arg_8 = rdx_4
                
                if (*(arg1 + 0x21a0) != rdx_4 || *(arg1 + 0x21a8) != 0
                        || *(arg1 + 0x21ac) != 0x1000)
                    *(arg1 + 0x21a0) = rdx_4
                    *(arg1 + 0x21a8) = 0
                    *(arg1 + 0x21ac) = 0x1000
                    int64_t* rcx_5 = *(arg1 + 0x188)
                    result = (*(*rcx_5 + 0x1f0))(rcx_5, 0, 1, &arg_8)
    
    if (*(rsi + 0xaa) != 0)
        result = *(arg1 + 0x43f8)
        void* rdi_3 = *result
        
        if (rdi_3 != 0)
            result = sub_140fde8a0(rdi_3, *(arg1 + 0x43d4))
            
            if (result.b != 0)
                result = *(rdi_3 + 0x40)
                int64_t rdx_6 = result[zx.q(*(rdi_3 + 0x48))]
                arg_8 = rdx_6
                
                if (*(arg1 + 0x2280) != rdx_6 || *(arg1 + 0x2288) != 0
                        || *(arg1 + 0x228c) != 0x1000)
                    *(arg1 + 0x2280) = rdx_6
                    *(arg1 + 0x2288) = 0
                    *(arg1 + 0x228c) = 0x1000
                    int64_t* rcx_8 = *(arg1 + 0x188)
                    result = (*(*rcx_8 + 0x210))(rcx_8, 0, 1, &arg_8)

if (*(rsi + 0xac) != 0)
    result = *(arg1 + 0x4418)
    void* rdi_4 = *result
    
    if (rdi_4 != 0)
        result = sub_140fde8a0(rdi_4, *(arg1 + 0x43d4))
        
        if (result.b != 0)
            result = *(rdi_4 + 0x40)
            int64_t rdx_8 = result[zx.q(*(rdi_4 + 0x48))]
            arg_8 = rdx_8
            
            if (*(arg1 + 0x2440) != rdx_8 || *(arg1 + 0x2448) != 0 || *(arg1 + 0x244c) != 0x1000)
                *(arg1 + 0x2440) = rdx_8
                *(arg1 + 0x2448) = 0
                *(arg1 + 0x244c) = 0x1000
                int64_t* rcx_11 = *(arg1 + 0x188)
                result = (*(*rcx_11 + 0xb0))(rcx_11, 0, 1, &arg_8)

if (*(rsi + 0xab) != 0)
    result = *(arg1 + 0x4408)
    void* rdi_5 = *result
    
    if (rdi_5 != 0)
        result = sub_140fde8a0(rdi_5, *(arg1 + 0x43d4))
        
        if (result.b != 0)
            result = *(rdi_5 + 0x40)
            int64_t rdx_10 = result[zx.q(*(rdi_5 + 0x48))]
            arg_8 = rdx_10
            
            if (*(arg1 + 0x2360) != rdx_10 || *(arg1 + 0x2368) != 0 || *(arg1 + 0x236c) != 0x1000)
                *(arg1 + 0x2360) = rdx_10
                *(arg1 + 0x2368) = 0
                *(arg1 + 0x236c) = 0x1000
                int64_t* rcx_14 = *(arg1 + 0x188)
                result = (*(*rcx_14 + 0x80))(rcx_14, 0, 1, &arg_8)

*(arg1 + 0x43d4) = 0
return result
