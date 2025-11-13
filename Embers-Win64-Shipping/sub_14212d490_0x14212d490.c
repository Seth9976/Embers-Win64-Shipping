// 函数: sub_14212d490
// 地址: 0x14212d490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg1

if (arg1 != 0)
    EnterCriticalSection(&data_143f4ab20)
    *(arg1 + 0x74) += 1
    LeaveCriticalSection(&data_143f4ab20)

int32_t result_2
sub_1405e21c0(&data_143a2e820, &result_2, &arg_20)
int64_t result = sx.q(result_2)
int64_t rcx_2

if (result.d == 0xffffffff)
    rcx_2 = 0
else
    rcx_2 = (result << 5) + data_143a2e820

int64_t rdi = rcx_2 + 8

if (rcx_2 == 0)
    rdi = 0

if (arg1 != 0)
    sub_14212fcb0(arg1)

if (rdi != 0)
label_14212d64f:
    result.b = 0
else
    int64_t* r13_1 = arg1[5]
    arg_20 = r13_1
    uint32_t r12_1 = zx.d(r13_1[0xb].b)
    void var_68
    sub_142119000(&var_68, arg2)
    result = sub_14211dd60(r12_1, &var_68)
    
    if (*(result + 0x38) != r13_1[0x30] || *(result + 0x40) != r13_1[0x31]
            || *(result + 0x48) != r13_1[0x32].d)
        int64_t* i = *(result + 8)
        
        for (void* rdi_3 = &i[sx.q(*(result + 0x10)) * 2]; i != rdi_3; i = &i[2])
            if (sub_1419cec70(r13_1, *i + 0x28, i[1].d) == 0
                    && (*(*arg2 + 8))(arg2, zx.q(r12_1), *i, 0).b != 0)
                goto label_14212d64f
        
        void** i_1 = *(result + 0x18)
        
        for (void* r15_1 = &i_1[sx.q(*(result + 0x20))]; i_1 != r15_1; i_1 = &i_1[1])
            void* rdi_4 = *i_1
            
            if (sub_1419a30a0(r13_1, rdi_4) == 0)
                int64_t* rbx_1 = *(rdi_4 + 0x20)
                void* rdi_5 = &rbx_1[sx.q(*(rdi_4 + 0x28))]
                
                if (rbx_1 == rdi_5)
                    goto label_14212d64f
                
                while ((*(*arg2 + 8))(arg2, zx.q(r12_1), *rbx_1, 0).b != 0)
                    rbx_1 = &rbx_1[1]
                    
                    if (rbx_1 == rdi_5)
                        goto label_14212d64f
        
        void* r14_1 = *(result + 0x28)
        result_2.q = r14_1
        result = sx.q(*(result + 0x30)) * 0x30 + r14_1
        int64_t i_2 = result
        
        if (r14_1 != result)
            void* r13_2 = r14_1 + 0x20
            
            do
                void* rax_8 = sub_142126240(arg_20, *(r13_2 + 8) + 0x20)
                void** j = *(r13_2 - 0x18)
                int64_t result_1
                
                for (void* rdi_8 = &j[sx.q(*(r13_2 - 0x10)) * 2]; j != rdi_8; j = &j[2])
                    if ((*(*arg2 + 8))(arg2, zx.q(r12_1), *j, *(r13_2 + 8), result_1, i_2).b != 0)
                        if (rax_8 == 0)
                            goto label_14212d64f
                        
                        if (sub_1419cec70(rax_8, *j + 0x28, j[1].d) == 0)
                            goto label_14212d64f
                
                void** r14_2 = *(r13_2 - 8)
                result = &r14_2[sx.q(*r13_2)]
                result_1 = result
                
                if (r14_2 != result)
                    do
                        void* rdi_9 = *r14_2
                        
                        if (rax_8 != 0)
                            result = sub_1419a30a0(rax_8, rdi_9)
                        
                        if (rax_8 == 0 || result == 0)
                            int64_t* rbx_2 = *(rdi_9 + 0x20)
                            int64_t r15_2 = *(r13_2 + 8)
                            void* rdi_10 = &rbx_2[sx.q(*(rdi_9 + 0x28))]
                            
                            if (rbx_2 == rdi_10)
                                goto label_14212d64f
                            
                            while (true)
                                result =
                                    (*(*arg2 + 8))(arg2, zx.q(r12_1), *rbx_2, r15_2, result_1, i_2)
                                
                                if (result.b == 0)
                                    break
                                
                                rbx_2 = &rbx_2[1]
                                
                                if (rbx_2 == rdi_10)
                                    goto label_14212d64f
                        
                        r14_2 = &r14_2[1]
                    while (r14_2 != result_1)
                
                r13_2 += 0x30
                result_2.q += 0x30
            while (result_2.q + 0x30 != i_2)
    
    result.b = 1

return result
