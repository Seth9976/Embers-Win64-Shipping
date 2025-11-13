// 函数: sub_1429a6690
// 地址: 0x1429a6690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1
sub_14297bd10(arg1, &i_1)
void arg_18
int64_t* rax = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    arg1, &arg_18)
void* i = i_1
char* rax_1

if (i != *rax)
    int64_t* rax_3
    
    do
        rax_1 = -ffffffffffffffff
        
        do
            rax_1 = &rax_1[1]
        while (*(i + rax_1 + 0x20) != 0)
        
        if (rax_1 u>= 0x20)
            goto label_1429a67b9
        
        int64_t* rcx_1 = *(i + 0x120)
        rax_1 = (*(*rcx_1 + 8))(rcx_1)
        int64_t rcx_2 = -1
        
        do
            rcx_2 += 1
        while (rax_1[rcx_2] != 0)
        
        if (rcx_2 u>= 0x20)
            goto label_1429a67b9
        
        sub_14297bb00(&i_1)
        rax_3 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            arg1, &arg_18)
        i = i_1
    while (i != *rax_3)

int64_t* rax_4 = sub_14297e970(arg1)
sub_14297bd10(rax_4, &i_1)
int64_t* rax_5 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    rax_4, &arg_18)
void* i_2 = i_1

if (i_2 == *rax_5)
label_1429a67b1:
    rax_5.b = 0
    return rax_5

while (true)
    rax_1 = -ffffffffffffffff
    
    do
        rax_1 = &rax_1[1]
    while (*(i_2 + rax_1 + 0x1c) != 0)
    
    if (rax_1 u>= 0x20)
        break
    
    sub_14297bb00(&i_1)
    rax_5 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        rax_4, &arg_18)
    i_2 = i_1
    
    if (i_2 == *rax_5)
        goto label_1429a67b1

label_1429a67b9:
rax_1.b = 1
return rax_1
