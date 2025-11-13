// 函数: sub_1422e4590
// 地址: 0x1422e4590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2
int64_t result = 0
TEB* gsbase

if (data_143f56ad0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f56ad0)
    
    if (data_143f56ad0 == 0xffffffff)
        sub_140b0a030(&data_143f56acc, u"Kismet", u"bEnableInheritableComponents", &data_143de5780)
        _Init_thread_footer(&data_143f56ad0)

if (data_143f56acc != 0)
    int64_t i = *(arg1 + 0x20)
    
    if (i != *(rbx + 0x278))
        void var_28
        sub_142076920(&var_28, arg1)
        
        do
            uint64_t rax_2 = sub_141ea2ff0(rbx, 0)
            
            if (rax_2 != 0)
                result = sub_142094c50(rax_2, &var_28)
            
            rbx = *(rbx + 0x40)
            void* rax_4
            int64_t rcx_3
            void* rdx_4
            
            if (rbx != 0)
                rax_4 = sub_14247bf70()
                rdx_4 = *(rbx + 0x10)
                rcx_3 = sx.q(*(rax_4 + 0x38))
            
            if (rbx == 0 || rcx_3.d s> *(rdx_4 + 0x38)
                    || *(*(rdx_4 + 0x30) + (rcx_3 << 3)) != rax_4 + 0x30)
                rbx = nullptr
            
            if (result != 0)
                return result
            
            if (rbx == 0)
                break
        while (i != *(rbx + 0x278))

return *(arg1 + 0x30)
