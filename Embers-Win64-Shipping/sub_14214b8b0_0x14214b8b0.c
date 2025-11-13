// 函数: sub_14214b8b0
// 地址: 0x14214b8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = nullptr
int64_t* var_48
int512_t zmm1 = sub_1423ddac0(data_143f5b298, &var_48, *(*(arg1 + 0x58) + 0x140))
int64_t* r10 = var_48
int32_t i_2
int32_t i = i_2

while (i s>= 0)
    if (i s< r10[1].d && *(*r10 + (sx.q(i) << 3)) == 0)
        i += 1
        i_2 = i
        continue
    
    if (i s< 0)
        break
    
    if (i s< r10[1].d)
        r13 = *(*r10 + (sx.q(i) << 3))
    
    break

void* rcx_3 = *(r13 + 0x30)
uint64_t arg_10

if (rcx_3 != 0 && sub_141dc9840(rcx_3) == sub_141dc9840(arg2))
    int64_t* rbx_2 = *(r13 + 0x30)
    
    if (rbx_2[0x1e].b != 3)
        arg_10.d = 0xffffffff
        sub_1421371f0(arg1, &arg_10, zmm1)
    else
        sub_1420e0c80((*(*rbx_2 + 0x150))(rbx_2), rbx_2, 0, 1)
    
    *(*(r13 + 0x30) + 0x298) = 0
    *(*(r13 + 0x30) + 0x418) = 0
    *(r13 + 0x30) = 0

*(r13 + 0x38) = *(arg1 + 0x38)
sub_141dd9000(arg2, 2)
int64_t rax_10 = *arg2
arg2[0x83] = arg3
(*(rax_10 + 0xc10))(arg2, r13)
void* rax_11 = *(arg1 + 0x58)
int32_t r15 = 0
int64_t** var_58 = nullptr
int64_t var_50 = 0
*(arg1 + 0x1d0) = *(rax_11 + 0x218)
*(arg1 + 0x134) = 3
*(arg1 + 0x30) = arg2
*(arg1 + 0x98) = arg2
int32_t rdi_1 = 0
void* rax_13 = (*(*arg2 + 0x150))(arg2)
int64_t r14 = 0
int64_t* rsi_1 = *(rax_13 + 0x98)
uint64_t rcx_13 = sx.q(*(rax_13 + 0xa0)) << 3 u>> 3

if (rsi_1 u> &rsi_1[sx.q(*(rax_13 + 0xa0))])
    rcx_13 = 0

arg_10 = rcx_13

if (rcx_13 != 0)
    do
        void* rbx_3 = *rsi_1
        
        if (rbx_3 != 0)
            void* rbx_4 = *(rbx_3 + 0x128)
            
            if (rbx_4 != 0 && (*(rbx_4 + 0x1f4) & 0x20) != 0 && (*(rbx_4 + 0x1f6) & 2) == 0)
                var_50.d = rdi_1 + 1
                
                if (rdi_1 + 1 s> r15)
                    sub_1405c4d20(&var_58)
                
                int64_t* rcx_16 = var_58 + sx.q(rdi_1) * 0x14
                int64_t* rbx_5
                
                if (rcx_16 == 0)
                    rbx_5 = nullptr
                else
                    rbx_5 = sub_14225aa60(rcx_16, rbx_4, 1)
                
                void arg_18
                *rbx_5 = *sub_142272470(arg2, &arg_18, *rbx_5, 0)
                r15 = var_50:4.d
                rdi_1 = var_50.d
                rcx_13 = arg_10
        
        rsi_1 = &rsi_1[1]
        r14 += 1
    while (r14 != rcx_13)
    
    if (rdi_1 s> 0)
        sub_14256a910(arg2, &var_58)
    
    int64_t** rcx_20 = var_58
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)

int64_t* result = sub_1423ddac0(data_143f5b298, &var_58, *(*(arg1 + 0x58) + 0x140))
int64_t** r8_7 = var_58
int32_t i_1 = var_50.d

while (i_1 s>= 0)
    if (i_1 s< r8_7[1].d)
        result = *r8_7
        
        if (result[sx.q(i_1)] == 0)
            i_1 += 1
            var_50.d = i_1
            continue
    
    while (i_1 s>= 0)
        if (i_1 s>= r8_7[1].d)
            break
        
        result = *r8_7
        int64_t* rcx_24 = result[sx.q(i_1)]
        
        if (rcx_24 != r13)
            var_48 = nullptr
            i_2.q = 0
            result = (*(*rcx_24 + 0x298))(rcx_24, &var_48)
            int32_t k_1 = i_2
            int64_t* rbx_6 = var_48
            
            if (k_1 != 0)
                int32_t k
                
                do
                    int64_t rcx_25 = *rbx_6
                    
                    if (rcx_25 != 0)
                        result = sub_140a74f90(rcx_25)
                    
                    rbx_6 = &rbx_6[2]
                    k = k_1
                    k_1 -= 1
                while (k != 1)
                rbx_6 = var_48
            
            if (rbx_6 != 0)
                result = sub_140a74f90(rbx_6)
            
            r8_7 = var_58
            i_1 = var_50.d
        
        do
            i_1 += 1
            var_50.d = i_1
            
            if (i_1 s< 0)
                return result
            
            if (i_1 s>= r8_7[1].d)
                break
            
            result = *r8_7
        while (result[sx.q(i_1)] == 0)
    
    break

return result
