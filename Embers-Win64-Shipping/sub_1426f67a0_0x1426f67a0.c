// 函数: sub_1426f67a0
// 地址: 0x1426f67a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x158) & 2) != 0)
    return 

sub_1426fa8b0(arg1)
int64_t* rax_1 = *(arg1 + 0xa8)

if (rax_1 == 0)
    rax_1 = sub_141ee69e0(arg1)

void* rax_2 = sub_1426fbdd0(rax_1)
wchar16* i_1 = nullptr

if (rax_2 != 0)
    sub_142715e20(rax_2, arg1)
    void* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        void* rax_3 = sub_142497110()
        void* rdx_2 = *(rbx_1 + 0x10)
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        void* rbx_2
        
        if (rax_4.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
            rbx_2 = *(arg1 + 0x20)
            
            if (rbx_2 != 0)
                void* rax_6 = sub_142452380()
                void* rdx_3 = *(rbx_2 + 0x10)
                int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                
                if (rax_7.d s<= *(rdx_3 + 0x38)
                        && *(*(rdx_3 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
                    goto label_1426f685c
        else
            rbx_2 = *(rbx_1 + 0x250)
        label_1426f685c:
            
            if (rbx_2 != 0)
                sub_142715f90(rax_2, rbx_2, nullptr)

if (((*(arg1 + 8) u>> 0xf).b & 1) == 0)
    void* rsi_2 = *(arg1 + 0xa0)
    
    if (rsi_2 != 0)
        for (wchar16* i = wcsstr(&UAIPerceptionComponent::OnOwnerEndPlay", ::"); i != 0; 
                i = wcsstr(&i[1], ::"))
            i_1 = i
        
        int64_t arg_8
        sub_140b58260(&arg_8, &i_1[2], 1)
        int64_t rbx_3 = arg_8
        
        if (*(rsi_2 + 0x18f) != 0)
            TEB* gsbase
            
            if (data_143f38e90 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f38e90)
                
                if (data_143f38e90 == 0xffffffff)
                    sub_140b58170(&data_143f38e88, "OnEndPlay", 1)
                    _Init_thread_footer(&data_143f38e90)
            
            *(rsi_2 + 0x18f) = sub_140d2a3f0(rsi_2, data_143f38e88, arg1, rbx_3)

*(arg1 + 0x158) |= 2
