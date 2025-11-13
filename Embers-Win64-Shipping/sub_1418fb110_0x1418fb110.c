// 函数: sub_1418fb110
// 地址: 0x1418fb110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()
char rax = sub_140b21a10(&data_143dbb3f0, u"novendordevice")
int64_t rbp = sx.q(arg2[1].d)
int64_t rdi
rdi.b = rax == 0
int32_t rax_1 = (rbp + 1).d
arg2[1].d = rax_1

if (rax_1 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rbp << 3)) = "VK_KHR_driver_properties"

if (data_143efb318 != 0)
    int64_t rdi_1
    
    if (arg1 != 0x1002)
        if (arg1 == 0x10de && rdi.b != 0)
            rdi_1 = sx.q(arg2[1].d)
            int32_t rax_4 = (rdi_1 + 1).d
            arg2[1].d = rax_4
            
            if (rax_4 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rdi_1 << 3)) = "VK_NV_device_diagnostic_checkpoints"
    else if (rdi.b != 0)
        rdi_1 = sx.q(arg2[1].d)
        int32_t rax_3 = (rdi_1 + 1).d
        arg2[1].d = rax_3
        
        if (rax_3 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (rdi_1 << 3)) = "VK_AMD_buffer_marker"

int64_t rdi_2 = sx.q(arg2[1].d)
int32_t rax_6 = (rdi_2 + 1).d
arg2[1].d = rax_6

if (rax_6 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rdi_2 << 3)) = "VK_KHR_bind_memory2"
int64_t rdi_3 = sx.q(arg2[1].d)
int32_t rax_8 = (rdi_3 + 1).d
arg2[1].d = rax_8

if (rax_8 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rdi_3 << 3)) = "VK_KHR_get_memory_requirements2"
int64_t rdi_4 = sx.q(arg2[1].d)
int32_t rax_10 = (rdi_4 + 1).d
arg2[1].d = rax_10

if (rax_10 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rdi_4 << 3)) = "VK_KHR_sampler_ycbcr_conversion"
int64_t rdi_5 = sx.q(arg2[1].d)
int32_t rax_12 = (rdi_5 + 1).d
arg2[1].d = rax_12

if (rax_12 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rdi_5 << 3)) = "VK_EXT_full_screen_exclusive"
int64_t rdi_6 = sx.q(arg2[1].d)
int32_t rax_14 = (rdi_6 + 1).d
arg2[1].d = rax_14

if (rax_14 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *arg2
*(result + (rdi_6 << 3)) = "VK_KHR_image_format_list"
return result
