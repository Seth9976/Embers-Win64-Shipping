// 函数: sub_14227b5e0
// 地址: 0x14227b5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
sub_142427eb0(&var_38)
int64_t* var_28 = arg1
int32_t var_c
int32_t var_c_1 = var_c | 0x40
int64_t var_20 = Concurrency::details::UMSSchedulerProxy::GetCompletionList(arg1)
void* rsi
int64_t* rdi_1

if (arg1[0x58] == 0)
    rsi = (*(*arg1 + 0x150))(arg1)
    rdi_1 = sub_1425675b0()
else
    void* rax_1 = sub_1425675b0()
    
    if (rax_1 == 0)
        rsi = (*(*arg1 + 0x150))(arg1)
        rdi_1 = sub_1425675b0()
    else
        void* rdx_1 = arg1[0x58]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
                || rdx_1 == 0)
            rsi = (*(*arg1 + 0x150))(arg1)
            rdi_1 = sub_1425675b0()
        else
            void* rax_4 = sub_1425675b0()
            int64_t rax_5
            
            if (rax_4 != 0)
                rdi_1 = arg1[0x58]
                rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_4 == 0 || rax_5.d s> rdi_1[7].d || *(rdi_1[6] + (rax_5 << 3)) != rax_4 + 0x30)
                rdi_1 = nullptr
            
            rsi = (*(*arg1 + 0x150))(arg1)

void* result = sub_1420efae0(rsi, rdi_1, nullptr, nullptr, &var_38)
arg1[0x57] = result

if (result == 0)
    return result

int64_t r8_2 = *result
return (*(r8_2 + 0x6b8))(result, arg1, r8_2)
