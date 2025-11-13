// 函数: sub_141900100
// 地址: 0x141900100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143efbc10 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efbc10)
    
    if (data_143efbc10 == 0xffffffff)
        int64_t* rcx_11 = data_143db18d0
        
        if (rcx_11 == 0)
            sub_140a53c40()
            rcx_11 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_11 = (*(*rcx_11 + 0xb0))(rcx_11, u"r.Vulkan.UseRealUBs", r8_4)
        int64_t rax_9
        
        if (rax_11 == 0)
            rax_9 = 0
        else
            int64_t rdx_7 = *rax_11
            rax_9 = (*(rdx_7 + 0x58))(rax_11, rdx_7)
        
        data_143efbc08 = rax_9
        _Init_thread_footer(&data_143efbc10)

int64_t rbx = data_143efbc08
int64_t rcx

if (rbx != 0)
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

if (rbx == 0 || *(rbx + (rcx << 2)) s<= 0)
    rcx = 0
else
    rcx.b = 1

char rax_3 = sub_1418c9180(rcx.b)
void*** rax_4 = j_sub_140a82f30(0x48)
void*** rdi = rax_4

if (rax_3 == 0)
    if (rdi == 0)
        rdi = nullptr
    else
        int32_t var_28_1 = arg6
        sub_1418f4260(rdi, arg4, arg3)
        *rdi = &data_142ff1c00
        rdi[7] = 0
        rdi[8] = 0
        int32_t rax_7 = *arg4
        
        if (rax_7 != 0)
            rdi[8].d = rax_7
            
            if (rax_7 s> 0)
                sub_1405daba0(&rdi[7])
            
            if (arg3 != 0)
                memcpy(rdi[7], arg3, *arg4)
else if (rax_4 == 0)
    rdi = nullptr
else
    void* rbx_2 = *(arg1 + 0x58)
    sub_1418f4260(rax_4, arg4, arg3)
    rdi[7] = rbx_2
    *rdi = &data_142ff1c08
    rdi[8] = 0
    uint32_t count = *arg4
    
    if (count != 0)
        void* rax_5 = sub_1418bb790(*(rbx_2 + 0x248) + 0x248, count, 0x12, 6, 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanUniformBuffer.cpp", 
            0x177)
        memcpy(zx.q(*(rax_5 + 0x14)) + *(*(*(rax_5 + 0x20) + 0x18) + 0x18), arg3, count)
        sub_1418be4a0(rax_5)
        rdi[8] = rax_5

*arg2 = rdi

if (rdi != 0)
    rdi[1].d += 1

return arg2
