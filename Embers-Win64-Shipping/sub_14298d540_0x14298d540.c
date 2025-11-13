// 函数: sub_14298d540
// 地址: 0x14298d540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1
sub_14297bd10(arg1 + 8, &i_1)
void var_28
int64_t* rax = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    arg1 + 8, &var_28)
void* i = i_1

if (i != *rax)
    int64_t* rax_24
    
    do
        char* rdi_1 = i + 0x1c
        
        if (*(i + 0x1c) != 0)
            do
                (*(*arg2 + 8))(arg2, rdi_1, 1)
                rdi_1 = &rdi_1[1]
            while (*rdi_1 != 0)
        
        (*(*arg2 + 8))(arg2, rdi_1, 1)
        int32_t rcx_4 = *(i_1 + 0x11c)
        char arg_11 = (rcx_4 s>> 8).b
        char arg_10 = rcx_4.b
        char arg_12 = (rcx_4 s>> 0x10).b
        char arg_13 = (rcx_4 s>> 0x18).b
        (*(*arg2 + 8))(arg2, &arg_10, 4)
        int64_t rax_10 = *arg2
        bool arg_8 = *(i_1 + 0x128) != 0
        (*(rax_10 + 8))(arg2, &arg_8, 1)
        int64_t j_1 = 3
        int64_t j
        
        do
            int64_t rax_11 = *arg2
            arg_8 = false
            (*(rax_11 + 8))(arg2, &arg_8, 1)
            j = j_1
            j_1 -= 1
        while (j != 1)
        int32_t rcx_9 = *(i_1 + 0x120)
        char arg_21 = (rcx_9 s>> 8).b
        char arg_20 = rcx_9.b
        char arg_22 = (rcx_9 s>> 0x10).b
        char arg_23 = (rcx_9 s>> 0x18).b
        (*(*arg2 + 8))(arg2, &arg_20, zx.q((j_1 + 4).d))
        int32_t rcx_12 = *(i_1 + 0x124)
        char var_37_1 = (rcx_12 s>> 8).b
        char var_38 = rcx_12.b
        char var_36_1 = (rcx_12 s>> 0x10).b
        char var_35_1 = (rcx_12 s>> 0x18).b
        (*(*arg2 + 8))(arg2, &var_38, zx.q((j_1 + 4).d))
        sub_14297bb00(&i_1)
        rax_24 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            arg1 + 8, &var_28)
        i = i_1
    while (i != *rax_24)

jump(*(*arg2 + 8))
