// 函数: sub_1429a3ac0
// 地址: 0x1429a3ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = sub_142980a30(arg1)
int64_t* rax_1 = sub_14297e970(arg1)
sub_142985580(arg2, sx.q(rax[3] - rax[1] + 1))
void* i_2
sub_14297bd10(rax_1, &i_2)
void arg_18
int64_t* rax_2 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    rax_1, &arg_18)
void* i = i_2
int64_t result = 0

if (i != *rax_2)
    int64_t* rax_16
    
    do
        int32_t rax_3 = sub_1429a6580(*(i + 0x11c))
        int32_t j = rax[1]
        *(i + 0x120)
        int64_t r11_1 = sx.q(divs.dp.d(sx.q(rax_3 * (rax[2] - *rax + 1)), *(i + 0x120)))
        
        if (j s<= rax[3])
            int64_t r10_1 = 0
            
            do
                int32_t r9_1 = *(i_2 + 0x124)
                int32_t r8_1
                
                if (j s< 0)
                    int32_t rax_12
                    
                    if (r9_1 s< 0)
                        rax_12 = not.d(r9_1) - j
                    else
                        rax_12 = r9_1 - j - 1
                    
                    r8_1 = neg.d(divs.dp.d(sx.q(rax_12), r9_1))
                else
                    r8_1 = divs.dp.d(sx.q(j), r9_1)
                
                if (j == r8_1 * r9_1)
                    int64_t* rdx_10 = *arg2
                    *(rdx_10 + r10_1) += r11_1
                
                j += 1
                r10_1 += 8
            while (j s<= rax[3])
        
        sub_14297bb00(&i_2)
        rax_16 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            rax_1, &arg_18)
        i = i_2
    while (i != *rax_16)

int32_t rax_17 = rax[3]
int32_t rcx_13 = rax[1]

if (rcx_13 s<= rax_17)
    int64_t* rdx_12 = *arg2
    uint64_t i_3 = zx.q(rax_17 - rcx_13 + 1)
    uint64_t i_1
    
    do
        int64_t result_1 = *rdx_12
        rdx_12 = &rdx_12[1]
        
        if (result u>= result_1)
            result_1 = result
        
        result = result_1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
