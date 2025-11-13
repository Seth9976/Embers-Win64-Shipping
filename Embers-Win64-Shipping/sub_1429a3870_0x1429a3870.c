// 函数: sub_1429a3870
// 地址: 0x1429a3870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2
int32_t r12 = arg3
int32_t* rax = sub_142980a30(arg1)
int32_t* rsi = rax
int64_t* rax_1 = sub_14297e970(arg1)
void* i_2
sub_14297bd10(rax_1, &i_2)
void var_48
int64_t* rax_2 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    rax_1, &var_48)
void* i = i_2
int64_t result = 0

if (i != *rax_2)
    int64_t* rax_27
    
    do
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(*(i + 0x124))
        int32_t r15_3 = (temp3_1 ^ temp2_1) - temp2_1
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(*(i + 0x120))
        int32_t rdi_3 = (temp5_1 ^ temp4_1) - temp4_1
        int32_t rax_8 = sub_1429a6580(*(i + 0x11c))
        int32_t rbx_2 = rsi[2]
        int32_t r12_3 = *rsi - 1 + rdi_3
        int32_t rsi_2 = rdi - 1 + r15_3
        int32_t r8_1 = r12 - mods.dp.d(sx.q(r12), r15_3)
        int32_t r12_4 = r12_3 - mods.dp.d(sx.q(r12_3), rdi_3)
        int32_t rbx_3 = rbx_2 - mods.dp.d(sx.q(rbx_2), rdi_3)
        int32_t rsi_3 = rsi_2 - mods.dp.d(sx.q(rsi_2), r15_3)
        
        if (rsi_3 s<= r8_1)
            int32_t r15_5 = rsi_3 * arg6
            
            do
                int32_t r9 = 0
                int32_t r8_2 = r12_4
                
                if (r12_4 s<= rbx_3)
                    int32_t rax_21 = r12_4 * arg5
                    
                    do
                        r8_2 += rdi_3
                        int64_t rcx_5 = sx.q(rax_21) + sx.q(r15_5)
                        rax_21 += rdi_3 * arg5
                        r9 += *(rcx_5 + arg4) * rax_8
                    while (r8_2 s<= rbx_3)
                
                int32_t rax_22 = rsi_3
                rsi_3 += r15_3
                r15_5 += r15_3 * arg6
                int64_t* rdx_14 = *arg7 + (sx.q(rax_22 - rax[1]) << 3)
                *rdx_14 += sx.q(r9)
            while (rsi_3 s<= r8_1)
        
        sub_14297bb00(&i_2)
        rax_27 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_1, &var_48)
        i = i_2
        rsi = rax
        r12 = arg3
    while (i != *rax_27)
    rdi = arg2

int64_t r9_1 = sx.q(rdi)
int64_t r8_3 = sx.q(r12)

if (r9_1 s<= r8_3)
    int64_t i_3 = r8_3 - r9_1 + 1
    int64_t* rax_30 = *arg7 + ((r9_1 - sx.q(rsi[1])) << 3)
    int64_t i_1
    
    do
        int64_t result_1 = *rax_30
        rax_30 = &rax_30[1]
        
        if (result u>= result_1)
            result_1 = result
        
        result = result_1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
