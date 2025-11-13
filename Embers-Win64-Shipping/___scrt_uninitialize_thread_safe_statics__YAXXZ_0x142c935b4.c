// 函数: ?__scrt_uninitialize_thread_safe_statics@@YAXXZ
// 地址: 0x142c935b4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = DeleteCriticalSection(&data_14401b168)
HANDLE hObject = data_14401b160

if (hObject == 0)
    return result

return CloseHandle(hObject)
