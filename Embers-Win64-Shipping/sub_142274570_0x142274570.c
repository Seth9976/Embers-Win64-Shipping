// 函数: sub_142274570
// 地址: 0x142274570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd1570(arg1)

if (arg1[0x4c7].d s> 0)
    int64_t* i = arg1[0x4c6]
    
    for (void* rbp_1 = &i[sx.q(arg1[0x4c7].d)]; i != rbp_1; i = &i[1])
        void* rbx_1 = *i
        
        if (rbx_1 != 0)
            void* rax_2 = sub_142486410()
            
            if (rax_2 != 0)
                int64_t rax_3 = sx.q(*(rax_2 + 0x38))
                
                if (rax_3.d s<= *(rbx_1 + 0x38)
                        && *(*(rbx_1 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
                    void* rax_6 = (*(*arg1 + 0x690))(arg1, rbx_1)
                    
                    if (rax_6 != 0)
                        void* rax_7 = sub_1424846b0()
                        void* rcx_2 = *(rax_6 + 0x10)
                        int64_t rdx_3 = sx.q(*(rax_7 + 0x38))
                        
                        if (rdx_3.d s<= *(rcx_2 + 0x38)
                                && *(*(rcx_2 + 0x30) + (rdx_3 << 3)) == rax_7 + 0x30)
                            arg1[0x4d0] = rax_6

void* rsi_1 = &arg1[0x4d1]
int64_t arg_8 = 0
int64_t i_2 = 8
int32_t var_88_1
int64_t i_1

do
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    var_88_1 = 0
    *rsi_1 = sub_140d2dfc0(sub_142484ee0(), arg1, 0, 0, 0, 0, 0, 0, 0)
    int64_t rbp_2 = sx.q(arg1[0x4e0].d)
    int32_t rax_11 = (rbp_2 + 1).d
    arg1[0x4e0].d = rax_11
    
    if (rax_11 s> *(arg1 + 0x2704))
        sub_1405a4d70(&arg1[0x4df])
    
    int64_t rax_12 = *rsi_1
    rsi_1 += 8
    *(arg1[0x4df] + (rbp_2 << 3)) = rax_12
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
void var_58
sub_142427eb0(&var_58)
int64_t* var_48 = arg1
int32_t var_2c
int32_t var_2c_1 = var_2c | 0x40
int64_t var_40 = Concurrency::details::UMSSchedulerProxy::GetCompletionList(arg1)
char var_30 = 1
var_88_1.q = &var_58
void* result = sub_1420efae0((*(*arg1 + 0x150))(arg1), sub_142486290(), nullptr, nullptr, var_88_1)
arg1[0x4e1] = result
return result
