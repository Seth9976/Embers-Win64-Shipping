// 函数: sub_1420370c0
// 地址: 0x1420370c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd2730(arg1)
void var_38
sub_142427eb0(&var_38)
int32_t var_c
int32_t var_c_1 = var_c | 0x40
int64_t var_20 = Concurrency::details::UMSSchedulerProxy::GetCompletionList(arg1)

if (arg1[0x47] == 0)
    arg1[0x47] = sub_1424bf010()
else
    void* rax_1 = sub_1424bf010()
    
    if (rax_1 == 0)
        arg1[0x47] = sub_1424bf010()
    else
        void* rdx_1 = arg1[0x47]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
                || rdx_1 == 0)
            arg1[0x47] = sub_1424bf010()

void* rax_6 = (*(*arg1 + 0x150))(arg1)
void* rdi = nullptr
int64_t* rdx_2

if (arg1[0x47] == 0)
    rdx_2 = nullptr
else
    void* rax_7 = sub_1424bf010()
    
    if (rax_7 == 0)
        rdx_2 = nullptr
    else
        rdx_2 = arg1[0x47]
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_8.d s> rdx_2[7].d || *(rdx_2[6] + (rax_8 << 3)) != rax_7 + 0x30)
            rdx_2 = nullptr

void* rax_10 = sub_1420efae0(rax_6, rdx_2, nullptr, nullptr, &var_38)
arg1[0x50] = rax_10
sub_142444b60(rax_6, rax_10)
void* rax_11 = arg1[0x50]

if (rax_11 != 0)
    *(rax_11 + 0x228) = arg1

void* rax_12 = sub_142437e30(rax_6, 0, 1)

if (*(rax_12 + 0x270) != 0)
    void* rax_13 = sub_1424b0d70()
    
    if (rax_13 != 0)
        void* rdx_4 = *(rax_12 + 0x270)
        int64_t rax_14 = sx.q(*(rax_13 + 0x38))
        
        if (rax_14.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax_14 << 3)) == rax_13 + 0x30
                && rdx_4 != 0)
            void* rax_16 = sub_1424b0d70()
            int64_t rax_17
            int64_t* rdx_5
            
            if (rax_16 != 0)
                rdx_5 = *(rax_12 + 0x270)
                rax_17 = sx.q(*(rax_16 + 0x38))
            
            if (rax_16 == 0 || rax_17.d s> rdx_5[7].d
                    || *(rdx_5[6] + (rax_17 << 3)) != rax_16 + 0x30)
                rdx_5 = nullptr
            
            rdi = sub_1420efae0(rax_6, rdx_5, nullptr, nullptr, &var_38)

*(rax_6 + 0x58) = rdi
return (*(*arg1 + 0x690))(arg1)
