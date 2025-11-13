// 函数: sub_14264c5a0
// 地址: 0x14264c5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t r12 = 0
int64_t* r15 = &arg1[0x6b]
int64_t rsi = sx.q(r15[1].d)
int64_t rbp = *r15
int64_t var_30 = 0
int32_t var_28 = rsi.d

if (rsi.d != 0)
    sub_14083a1f0(&var_30, rsi.d, 0)
    r12 = var_30
    memcpy(r12, rbp, (rsi << 5).d)
else
    int32_t var_24_1 = 0

void var_48

if (r15 != &var_48)
    int32_t r8_3 = *(r15 + 0xc)
    r15[1].d = 0
    
    if (r8_3 != 0)
        sub_14083a1f0(r15, 0, r8_3)
    else
        *(r15 + 0xc) = 0

char rax = sub_142666f20(arg1)
int32_t rcx_6 = (arg1[0xd].d & 0xffffffdf) | zx.d(rax) << 5
int64_t rax_3 = *arg1
arg1[0xd].d = rcx_6

if ((rcx_6.b & 0x20) == 0)
    (*(rax_3 + 0x3c8))(arg1)
else
    (*(rax_3 + 0x328))(arg1)
    
    if (arg1[0x53] != 0)
        char rax_4 = sub_14265b530(arg1)
        void* rdx_3 = arg1[0x53]
        *(rdx_3 + 0x4a4) &= 0xfffffffe
        int32_t rcx_9
        rcx_9.b = rax_4 == 2
        *(rdx_3 + 0x4a4) |= rcx_9
        
        if (rax_4 == 2)
            void*** rax_5 = sub_140a84c80(0, 0x20, 0)
            
            if (rax_5 != 0)
                *rax_5 = &data_142e85898
                rax_5[1] = sub_142679cc0
                rax_5[3] = sub_140a387b0()
                *rax_5 = &data_142e858f0
            
            int64_t* r14_2 = arg1[0x53] + 0x440
            
            if (&var_48 != r14_2)
                if (rax_5 != 0)
                    (*rax_5)[8](rax_5, r14_2)
                else if (r14_2[1].d != 0)
                    int64_t* rcx_11 = *r14_2
                    
                    if (rcx_11 != 0)
                        (*(*rcx_11 + 0x38))(rcx_11, 0)
                        int64_t rcx_12 = *r14_2
                        
                        if (rcx_12 != 0)
                            *r14_2 = sub_140a84c80(rcx_12, 0, 0)
                        
                        r14_2[1].d = 0
            
            if (rax_5 != 0)
                (*rax_5)[7](rax_5, 0)
                int64_t rax_11 = sub_140a84c80(rax_5, 0, 0)
                
                if (rax_11 != 0)
                    sub_140a74f90(rax_11)
        
        if ((arg1[0x5f].b & 1) == 0)
            void* rax_13 = (*(*arg1 + 0x150))(arg1)
            
            if (sub_141abb820(rax_13) s> 0)
                int32_t rax_16
                
                do
                    int64_t rax_15 = sub_142436b10(rax_13, rbx)
                    
                    if (rax_15 != 0)
                        int64_t r8_4 = *arg1
                        (*(r8_4 + 0x388))(arg1, rax_15, r8_4)
                    
                    rbx += 1
                    rax_16 = sub_141abb820(rax_13)
                while (rbx s< rax_16)

void* var_58 = &arg1[0x49]
void* var_50 = &arg1[0x6a]
sub_142662ef0(&var_58)
uint8_t rbx_2 = (arg1[0xd].d u>> 5).b & 1
sub_140b4cd20(r15, &var_30)

if (r12 != 0)
    sub_140a74f90(r12)

return zx.q(rbx_2)
